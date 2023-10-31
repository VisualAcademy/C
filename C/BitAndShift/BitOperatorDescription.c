// bit-operator-description.md
// ��Ʈ ������: AND(&), OR(|), XOR(^), NOT(~) 
#include <stdio.h>

int main(void)
{
    int x = 12; // 2������ 1100
    int y = 10; // 2������ 1010

    int a = x & y; // AND ����: 1000 -> 8
    int o = x | y; // OR ����: 1110 -> 14
    int e = x ^ y; // XOR ����: 0110 -> 6
    // NOT ����: �ý��ۿ� ���� ����� �ٸ� �� ����. 32��Ʈ int�� �����ϸ� ū ���� ���� ��.
    int n = ~x;    // 11111111...11110011 -> -13

    printf("a: %d\n", a);
    printf("o: %d\n", o);
    printf("e: %d\n", e);
    printf("n: %d\n", n);

    getchar(); // ���α׷� ���� �� ������� �Է��� ��ٸ��ϴ�.

    return 0;
}
