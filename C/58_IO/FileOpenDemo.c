#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

FILE* stream;

main()
{
	// 파일 열기 시도
	stream = fopen("C:\\temp\\C.txt", "r");

	// 파일 열기 결과 확인
	if (stream == NULL)
	{
		printf("파일이 없거나, 파일이 오픈되지 않았습니다.");
	}
	else
	{
		printf("파일이 있고, 파일이 오픈되었습니다.");
	}

	// 파일 닫기
	if (stream)
	{
		fclose(stream);
	}
}
