#include <stdio.h>

main()
{
    int i = 1234; // 16��Ʈ ����
    long l = 1234L; // 32��Ʈ ����
    float f = 3.14f; // �����е� �Ǽ�
    double d = 3.14; // �����е� �Ǽ�

    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%.2f\n", f);
    printf("%.2f\n", d);
}
