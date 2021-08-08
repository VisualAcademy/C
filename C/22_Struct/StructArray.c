#include <stdio.h>

//[!] 구조체 선언: 회원 관리
struct Member
{
    char* Name;	// 이름
    int		Age;	// 나이
    double	Weight;	// 몸무게
};

int main()
{
    int i;

    //[1] 구조체 배열 선언
    struct Member m[3]; // Member 형식이 3개가 준비

    //[2] 초기화
    m[0].Name = "홍길동";
    m[0].Age = 21;
    m[0].Weight = 100.05;

    m[1].Name = "백두산";
    m[1].Age = 100;
    m[1].Weight = 70.05;

    m[2].Name = "임꺽정";
    m[2].Age = 40;
    m[2].Weight = 150.05;

    //[3] 참조
    for (i = 0; i < 3; i++)
    {
        printf("%s, %3d, %6.2f\n", m[i].Name, m[i].Age, m[i].Weight);
    }

    return 0;
}
