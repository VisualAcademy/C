#include <stdio.h>

int main(void)
{
    // ���� ���� : DataType
    char myChar;
    int intNum;
    double dblNum;

    // ���� �ʱ�ȭ : = ������
    myChar = 'A';
    intNum = 10;
    dblNum = 10.05;

    // ���� ���� : printf() �Լ�
    printf("%c\n", myChar); // A
    printf("%d\n", intNum);  // 10
    printf("%f\n", dblNum);  // 10.05

    // ���� ũ�� : sizeof() ������
    printf("%zu Byte \n", sizeof(myChar)); // 1 Byte
    printf("%zu Byte \n", sizeof(intNum));  // 4 Byte
    printf("%zu Byte \n", sizeof(dblNum));  // 8 Byte

    return 0;
}
