// 이스케이프시퀀스(Escape Sequence) : 문자 상수
#include <stdio.h>

main()
{
	printf("안녕하세요.\n");				// \n : 줄바꿈 : new line
	printf("반갑\t습니다.\n");			// \t : 탭 키만큼 이동
	printf("또\t만나요...\b\b\b");		// \b : 백스페이스 : 뒤로 한칸

	printf("\n\"언제요?\"\n");			// \" : 큰 따옴표 자체 출력
	printf("\'언제요?\'\n");				// \' : 작은 따옴표 자체 출력
	printf("\\\n");						// \\ : 백(역)슬래시 기호 자체 출력
										// 백슬래시 기호 : 한글(원), 영문(백슬래시)
	printf("캐리지리턴\r");				// \r : 제일 앞으로
	printf("\r\n");						// \r\n : 캐리지리턴+뉴라인 : 줄바꿈(개행)
	//getchar(); // 엔터 입력시까지 입력대기
}
