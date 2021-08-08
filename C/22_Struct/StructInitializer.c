#include <stdio.h>

//[?] 구조체 선언: 회원 관리
struct Member
{
    char* Name;	// 이름
    int		Age; // 나이
    double	Weight;	// 몸무게
} objMember = { "백두산", 100, 70.05 };

int main()
{
    //[!] 구조체(Struct) 참조 
    printf("이름: %s, 나이: %d, 몸무게: %.2f\n",
        objMember.Name, objMember.Age, objMember.Weight);

    return 0;
}
