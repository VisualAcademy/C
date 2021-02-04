/*
	문자열 처리 관련 함수
*/
#include <stdio.h>
#include <string.h>

void main(void)
{
	// 원본 데이터
	char str[] = "Abc Def Fed Cba";
	char strr[] = "abcd";
	char str1[80];
	char str2[80];

	printf("%s\n", str);

	// strlen() : 문자열의 길이
	printf("문자열의 길이 : %d\n", strlen(str)); // length

	// strlwr() : 소문자로 변환
	printf("소문자로 : %s\n", strlwr(str)); // lower

	// strupr() : 대문자로 변환
	printf("대문자로 : %s\n", strupr(str)); // upper

	// strrev() : 거꾸로 변환
	printf("거꾸로 : %s\n", strrev(strr)); // reverse

	// strset() : 채우기
	printf("채우기 : %s\n", strset(strr, '*'));

	// strnset() : n개 채우기
	printf("n개 채우기 : %s\n", strnset(str, '*', 5));

	// strcpy() : 복사
	printf("복사 : %s\n", strcpy(str1, "Abc")); // copy
	printf("복사 : %s\n", strcpy(str2, "aBC"));

	// strcmp() : 비교, 같으면 0을 반환
	if (strcmp(str1, str2) == 0)				// compare
	{
		printf("%s와 %s는 같음\n", str1, str2);
	}
	else
	{
		printf("%s와 %s는 다름\n", str1, str2);
	}

	// strchr() : 문자열에서 특정 문자 이후로 출력
	printf("%s\n", strchr(str2, 'B')); // "aBC" => BC

	// strstr() : 문자열에서 특정 문자열 시작 위치
	printf("%s\n", strstr(str2, "aa")); // "aBC" => null(0)

	printf("%s, %s\n", str1, str2); // Abc, aBC

	// strcat() : 붙임
	strcat(str1, str2); // concat
	printf("%s\n", str1); // AbcaBC
}
