//[?] continue ���� ����Ͽ� �ݺ���(for, while, do)���� ���� �ݺ����� �̵��ϱ�
#include <stdio.h>

main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 0)
        {
            //[!] ���� �ݺ� ���� �� ���� �ݺ����� �̵�
            continue; // ¦�� �ǳʶٱ�
        }
        printf("%d\n", i);
    }
}
