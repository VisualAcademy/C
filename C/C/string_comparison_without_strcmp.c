#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i;

    printf("�� ���ڿ��� �Է��ϼ���: ");
    scanf("%s %s", str1, str2);

    for (i = 0; str1[i] == str2[i] && str1[i] != '\0'; i++)
    {
        // ���ڿ��� �� ���ڸ� ���ϰ� ������ ��� �����մϴ�.
    }

    if (str1[i] < str2[i])
    {
        printf("%s��(��) %s���� �۽��ϴ�.\n", str1, str2);
    }
    else if (str1[i] > str2[i])
    {
        printf("%s��(��) %s���� �۽��ϴ�.\n", str2, str1);
    }
    else
    {
        printf("%s��(��) %s�� �����ϴ�.\n", str1, str2);
    }

    return 0;
}
