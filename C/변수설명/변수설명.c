// ����(Variable) : �޸� ���� �ӽ� ������ ���� ����(�׸�)
#include <stdio.h>

main()
{
    // ���� ���� �� �ʱ�ȭ : Ű���� ������ = ��;
    int i = 1234;			// int : ����
    long l = 2147483647;	// long : ū ����
    char c = 'A';			// char : ����
    double d = 3.141592;	// double : �Ǽ�
    float f = 3.141592;		// float : �Ǽ�
    char* s = "�ȳ��ϼ���.";	// char* : ����������(*) : ���ڿ� != string Ű����(C#)

    // ���� ����(���)
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%f\n", d);
    printf("%10.2f\n", f);
    printf("%s\n", s);

    // int num = 1234; // ���� ������ �Լ��� ��ܺο��� �����ؾ� ��
}
