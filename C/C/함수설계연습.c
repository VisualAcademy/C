//[?] �ŵ����� �Լ� �����
#include <stdio.h>

//[!] �Լ� ����
void Calc(int a, char c, int b);
int Pow(int a, int b);

//[!] �Լ� ����
int Max(int a, int b)
{
    //int m = 0;
    //if (a > b)
    //{
    //	m = a;
    //}
    //else
    //{
    //	m = b;
    //}
    //return m; 
    return (a > b) ? a : b;
}

int main(void)
{
    //[0] ���� ���� ��
    int m = 0;
    int r = 0;

    //[1]
    m = Max(3, 5); // 5
    printf("ū ��: %d\n", m);

    //[2] �Լ� ȣ�� : Calc(3, '+', 5); Calc(3, '-', 5);
    Calc(3, '+', 5);
    Calc(3, '-', 5);
    Calc(3, '%', 5);

    //[3] Pow(2, 10) : 2 ^ 10 = 1024, Pow(3, 3) = 27
    r = Pow(2, 10);
    printf("2�� 10��: %d\n", r); // 1024 
    r = Pow(2, 20);
    printf("2�� 20��: %d\n", r); // 1048576

    return 0;
}

int Pow(int a, int b)
{
    int r = 1; // 1�� �ʱ�ȭ 
    int i = 0;

    for (i = 0; i < b; i++)
    {
        r *= a; // r = r * a; 
    }

    return r; // a ^ b
}

void Calc(int a, char c, int b)
{
    int r = 0;

    switch (c)
    {
    case '+': r = a + b; break;
    case '-': r = a - b; break;
    case '*': r = a * b; break;
    case '/': r = a / b; break;
    case '%': r = a % b; break;
    default: r = 0; break;
    }

    printf("%d %c %d = %d\n", a, c, b, r);
}
