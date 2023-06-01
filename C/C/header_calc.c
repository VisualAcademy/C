// header_calc.c
#include "header_calc.h"

int add(int a, int b)
{
    return a + b; // µ¡¼À °á°ú ¹ÝÈ¯
}

int subtract(int a, int b)
{
    return a - b; // »¬¼À °á°ú ¹ÝÈ¯
}

int multiply(int a, int b)
{
    return a * b; // °ö¼À °á°ú ¹ÝÈ¯
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b; // ³ª´°¼À °á°ú ¹ÝÈ¯
    }
    else
    {
        return 0; // ¿¡·¯ ÄÉÀÌ½º: 0À¸·Î ³ª´©´Â °æ¿ì
    }
}