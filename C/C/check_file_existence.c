#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 보안 경고를 무시하도록 설정
#include <stdio.h>

int main(void)
{
    // 파일을 읽기 모드로 열기 시도
    FILE* file = fopen("example.txt", "r");

    // 파일이 열리지 않은 경우(NULL)
    if (file == NULL)
    {
        // 파일이 존재하지 않음을 사용자에게 알리고 종료
        printf("파일이 존재하지 않습니다.\n");
        return 1;
    }
    else
    {
        // 파일이 존재함을 사용자에게 알리고 파일을 닫은 후 종료
        printf("파일이 존재합니다.\n");
        fclose(file);
        return 0;
    }
}
