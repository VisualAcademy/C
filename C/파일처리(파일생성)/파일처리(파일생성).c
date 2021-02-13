// 파일에 텍스트 쓰기(저장)
#include <stdio.h>

void main(void)
{
	//[0] 파일 처리를 위한 FILE 포인터 형 변수 선언
	FILE* objFile;

	//[1] 파일 생성 시도 : 파일 열기 또는 생성
	objFile = fopen("c:\\Temp\\Hello.txt", "w+"); // 없으면 생성

	//[2] 파일 생성 확인
	if (objFile == NULL)
	{
		printf("파일이 생성되지 않았습니다. 경로나 권한을 살펴보세요.\n");
	}
	else
	{
		printf("파일 생성 완료.\n");
	}

	//[3] 파일 닫기
	fclose(objFile);
}
