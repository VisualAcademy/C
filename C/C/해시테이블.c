#include <stdio.h>
#include <string.h>
#define TableSize 1000  // 해시테이블의 크기 : 1000개의 배열
#define ModSize 1000    // 1000으로 나누면, 0~999까지의 나머지값을 인덱스로 봄
//[!] 해시 알고리즘을 사용하여 해시 데이터 만들기 : A~Z까지만을 기준
// AA~ZZZ까지 영문대문자만 전달시 : 0~999번째 인덱스를 반환
int Hashtable(char* s) {
    int n;
    n = strlen(s);
    return (s[0] - 'A' + (s[n / 2 - 1] - 'A') * 26 + (s[n - 2] - 'A') * 26 * 26) % ModSize;
}
struct Member {
    char Name[25];  // 이름
    char Tel[15];   // 전화
}mem[TableSize];    // 1000개의 해시테이블
void main(void) {
    int i = 0; int index = 0;
    char name[25]; char tel[15];
    // 3개의 레코드를 사용자로부터 받기
    printf("이름과 전화번호 : \n");
    // 3개의 레코드 저장
    for (i = 0; i < 3; i++) {
        scanf("%s %s", name, tel);
        index = Hashtable(name); // 문자열에 해당하는 인덱스 받기
        strcpy(mem[index].Name, name); // 실제로는 정수형인덱스에 저장 
        strcpy(mem[index].Tel, tel);
    }
    // 검색
    printf("검색 :\n");
    for (i = 0; i < 3; i++) {
        printf("이름 : "); scanf("%s", name);
        index = Hashtable(name);
        if (strlen(mem[index].Name) < 2) {
            printf("해당 이름이 없습니다.");
        }
        else {
            printf("이름 : %s, 전화 : %s\n", mem[index].Name, mem[index].Tel);
        }
    }
    // AA = 0, BB = 703, NN = 139, ... => 0~999
    // NN과 NNB가 동일한 인덱스를 바라본다. 충돌
    //int r = Hashtable("NNB"); printf("%d\n", r); 
}