// 파일 텍스트 읽기 : C:\Temp\Hello.txt
#include <stdio.h>

void main(void)
{
	char buffer[80]; // 문자열을 저장해 놓을 공간
	//[0] 파일 처리를 위한 FILE 포인터 형 변수 선언
	FILE* objFile;

	//[1] 파일 생성 시도 : 파일 열기 또는 생성
	objFile = fopen("c:\\Temp\\Hello.txt", "rt"); // rt : 텍스트 읽기

	//[2] 파일 생성 확인
	if (objFile == NULL)
	{
		printf("파일이 생성되지 않았습니다. 경로나 권한을 살펴보세요.\n");
	}
	else
	{
		//[4] 파일에서 텍스트 읽기 : EOF(End Of File) : 파일의 끝
		//fscanf(objFile, "%s\n", buffer);	// 파일에서 읽어와서(한줄)
		while (fscanf(objFile, "%s\n", buffer) != EOF) // 파일에서 읽어와서(여러줄), fgets(), fputs()
		{
			printf("%s\n", buffer);				// 화면에 출력
		}
	}

	//[3] 파일 닫기
	fclose(objFile);
}
