// goto문: 지정한 레이블(책갈피)로 이동하는 구문
#include <stdio.h>

int main()
{
	int chapter = 0;

	printf("시작\n");

Start:
	printf("0, 1, 2 중 하나 입력: _\b");
	scanf("%d", &chapter);

	if (chapter == 1)
	{
		goto Chapter1;
	}
	else if (chapter == 2)
	{
		goto Chapter2;
	}
	else
	{
		goto End;
	}

Chapter1:
	printf("1장입니다.\n");
Chapter2:
	printf("2장입니다.\n");
	goto Start;

End:
	printf("종료\n");
	return 0;
}
