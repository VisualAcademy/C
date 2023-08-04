#include <stdio.h>
#include <malloc.h>
#include <string.h>

typedef char* string;

void main()
{
	//[1] 메모리 할당용 포인터 변수
	string s;
	//[2] 포인터변수에 문자열 할당(메모리 자동 할당)
	s = calloc(20, sizeof(int));
	//[3] 프로그램내에서 해당 공간을 채움
	strcpy(s, "반갑습니다.");
	//[4] 출력
	printf("%s\n", s);
	//[5] 할당된 메모리의 크기 출력
	printf("%d\n", sizeof(s));//4Byte
	printf("%d\n", _msize(s));//80Byte
	//[6] 할당된 메모리의 크기 증가
	s = realloc(s, 200);
	strcpy(s, "반갑습니다.또만나요.");
	printf("%s\n", s);
	printf("%d\n", _msize(s));//80Byte
	//[7] 마무리 : 해당 메모리 공간 해제
	free(s);
}
