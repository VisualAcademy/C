#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void new_print(char* format, ...);

int main(void)
{
    new_print("%d \n", 10);
    new_print("name=%s, age=%d, weight=%f", "red", 21, 60.0);

    return 0;
}

void new_print(char* format, ...)
{
    va_list data;   //���� ���� ó�� ����Ʈ
    va_start(data, format); //��������Ʈ ����

    while (*format)
    {
        if (memcmp(format, "%d", 2) == 0)
        {
            int i = va_arg(data, int);
            printf("%d", i);
            format = format + 2;
        }
        else if (memcmp(format, "%f", 2) == 0)
        {
            double f = va_arg(data, double);
            printf("%f", f);
            format = format + 2;
        }
        else if (memcmp(format, "%s", 2) == 0)
        {
            char* str = va_arg(data, char*);
            printf("%s", str);
            format = format + 2;
        }
        else
        {
            printf("%c", *format);
            format = format + 1;
        }
    }

    va_end(data);   //��������Ʈ ����
}
