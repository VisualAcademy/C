/*
해시테이블(Hashtable) :
    배열의 인덱스값을 사용하지 않고,
    문자열의 키값을 사용하여 데이터 입력과 출력을 할 수 있는 구조
*/
#include <stdio.h>
#include <string.h>

#define TableSize 1000
#define ModSize 1000

int Hashtable(char*);

// 간단한 이름과 전화번호를 저장하는 구조체
struct PhoneAddress
{
    char Name[25];	// 이름 필드
    char Phone[15];	// 전화번호 필드
}mobile[TableSize];

void main(void)
{
    int n;
    int i = 0;
    char name[25], phone[15];

    printf("이름(영문대문자) 전화번호\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%s %s", name, phone);
        n = Hashtable(name); // 해시테이블로부터 인덱스 받아오기
        strcpy(mobile[n].Name, name);
        strcpy(mobile[n].Phone, phone);
    }

    //rewind(stdin);
    printf("검색할 데이터를 입력하세요.\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%s", name);
        n = Hashtable(name); // 해시테이블로부터 인덱스 받아오기
        printf("%25s %15s\n", mobile[n].Name, mobile[n].Phone);
    }
}

// 해시 알고리즘을 사용하여 해시 데이터 만들기
int Hashtable(char* s)
{
    int n;

    n = strlen(s);
    return
        (s[0] - 'A' + (s[n / 2 - 1] - 'A') * 26 + (s[n - 2] - 'A') * 26 * 26)
        % ModSize;
}

/*
이름 전화번호
NN 111
BB 222
CC 333
검색할 데이터를 입력하세요.
BB
                       BB             222
CC
                       CC             333
NN
                       NN             111
계속하려면 아무 키나 누르십시오 . . .
*/
