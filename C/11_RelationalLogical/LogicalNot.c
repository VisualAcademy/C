// ���� ������: ! -> ���� NOT: ���̸� ����, �����̸� ������ ��ȯ
#include <stdio.h>

main()
{
    // ! ������: NOT
    printf("!1 -> %d\n", !1); // 0
    printf("!0 -> %d\n", !0); // 1
    printf("!!0 -> %d\n", !!0); // 0
    printf("!(!(!0)) -> %d\n", !(!(!0))); // 1
}