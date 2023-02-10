#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE* fp_in, * fp_out;
    char str[100];

    // words.txt ������ �б� ���� ����.
    fp_in = fopen("words.txt", "r");
    if (fp_in == NULL)
    {
        printf("Error opening input file\n");
        return 1;
    }

    // ����� ������ output.txt ������ ���� ���� ����.
    fp_out = fopen("output.txt", "w");
    if (fp_out == NULL)
    {
        printf("Error opening output file\n");
        return 1;
    }

    // words.txt ���Ͽ��� �� �پ� �о���δ�.
    while (fgets(str, 100, fp_in) != NULL)
    {
        // �Ųٷ� ���ڿ��� �����Ѵ�.
        int len = strlen(str);
        for (int i = len - 1; i >= 0; i--)
        {
            fputc(str[i], fp_out);
        }
    }

    // ������ �ݴ´�.
    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
