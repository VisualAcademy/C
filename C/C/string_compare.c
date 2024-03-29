#define _CRT_SECURE_NO_WARNINGS // 이 줄은 Visual Studio에서 보안 경고를 방지하는 데 사용됩니다.

#include <stdio.h>  // 표준 입출력 함수를 위한 헤더 파일입니다.
#include <string.h> // 문자열 처리를 위한 헤더 파일입니다.

int main(void) // 프로그램의 진입점인 main 함수입니다.
{
    char str1[100], str2[100]; // 두 개의 문자열을 저장할 배열을 선언합니다.

    printf("첫 번째 문자열을 입력하세요: "); // 사용자에게 첫 번째 문자열 입력을 요청합니다.
    scanf("%s", str1); // 사용자로부터 첫 번째 문자열을 입력받습니다.

    printf("두 번째 문자열을 입력하세요: "); // 사용자에게 두 번째 문자열 입력을 요청합니다.
    scanf("%s", str2); // 사용자로부터 두 번째 문자열을 입력받습니다.

    if (strcmp(str1, str2) == 0) // 두 문자열을 비교합니다. 같으면 0을 반환합니다.
    {
        printf("두 문자열은 같습니다.\n"); // 두 문자열이 같다는 메시지를 출력합니다.
    }
    else
    {
        printf("두 문자열은 다릅니다.\n"); // 두 문자열이 다르다는 메시지를 출력합니다.
    }

    return 0; // 프로그램이 성공적으로 종료되었음을 운영 체제에 알립니다.
}
