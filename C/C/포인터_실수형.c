#include <stdio.h>

int main() 
{
    float a = 100.0, b = 200.0, c;
    float* p = &c;  // c의 주소를 p에 할당

    *p = a + b;  // c = a + b

    printf("%.1f + %.1f = %.1f\n", a, b, *p);
    printf("%p %p %p %p %p\n", (void*)&a, (void*)&b, (void*)&c, (void*)p, (void*)&p);

    return 0;
}
//100.0 + 200.0 = 300.0
//00DDF7A4 00DDF798 00DDF78C 00DDF78C 00DDF780
