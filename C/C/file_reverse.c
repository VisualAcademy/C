#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE* fp_in, * fp_out;
    char str[100];

    // words.txt 파일을 읽기 모드로 연다.
    fp_in = fopen("words.txt", "r");
    if (fp_in == NULL)
    {
        printf("Error opening input file\n");
        return 1;
    }

    // 결과를 저장할 output.txt 파일을 쓰기 모드로 연다.
    fp_out = fopen("output.txt", "w");
    if (fp_out == NULL)
    {
        printf("Error opening output file\n");
        return 1;
    }

    // words.txt 파일에서 한 줄씩 읽어들인다.
    while (fgets(str, 100, fp_in) != NULL)
    {
        // 거꾸로 문자열을 저장한다.
        int len = strlen(str);
        for (int i = len - 1; i >= 0; i--)
        {
            fputc(str[i], fp_out);
        }
    }

    // 파일을 닫는다.
    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
