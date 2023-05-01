#define _CRT_SECURE_NO_WARNINGS // Visual Studio에서 보안 경고를 무시하도록 설정
#include <stdio.h>

// 파일의 크기를 구하는 함수
long getFileSize(FILE* file)
{
    // 현재 파일 포인터 위치를 저장
    long currentPosition = ftell(file);
    // 파일 포인터를 파일의 끝으로 이동
    fseek(file, 0, SEEK_END);
    // 파일의 크기를 구하기 위해 파일 포인터 위치를 저장
    long fileSize = ftell(file);
    // 파일 포인터를 원래 위치로 복원
    fseek(file, currentPosition, SEEK_SET);
    // 파일 크기 반환
    return fileSize;
}

int main(void)
{
    // 파일을 읽기 모드로 열기
    FILE* file = fopen("example.txt", "r");
    // 파일 열기 실패 시 오류 메시지 출력 후 종료
    if (file == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }

    // 파일 크기를 구하는 함수 호출
    long fileSize = getFileSize(file);
    // 파일 크기를 바이트 단위로 출력
    printf("파일 크기: %ld 바이트\n", fileSize);

    // 파일 닫기
    fclose(file);

    // 프로그램 정상 종료
    return 0;
}
