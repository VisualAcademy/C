#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void custom_printf(char* format, ...);

int main(void)
{
    custom_printf("%d \n", 10);
    custom_printf("name=%s, age=%d, weight=%f", "red", 21, 60.0);

    return 0;
}

void custom_printf(char* format, ...)
{
    va_list args;   // 가변 인자 목록
    va_start(args, format); // 가변 인자 목록 시작

    while (*format)
    {
        if (memcmp(format, "%d", 2) == 0)
        {
            int i = va_arg(args, int);
            printf("%d", i);
            format += 2;
        }
        else if (memcmp(format, "%f", 2) == 0)
        {
            double f = va_arg(args, double);
            printf("%.2f", f);
            format += 2;
        }
        else if (memcmp(format, "%s", 2) == 0)
        {
            char* str = va_arg(args, char*);
            printf("%s", str);
            format += 2;
        }
        else
        {
            printf("%c", *format);
            format++;
        }
    }

    va_end(args);   // 가변 인자 목록 종료
}
