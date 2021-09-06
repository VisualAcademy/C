// 공용체(Union): 구조체와 동일한 기능을 구현하나 메모리를 공용(공유)해서 사용
#include <stdio.h>

// 공용체 선언: union => struct/class
union Member
{
    char* Name;
    int		Age;
    double	Weight;
};

int main(void)
{
    // 공용체 형식의 변수 선언
    union Member m;

    m.Name = "홍길동";		// 저장
    printf("%s\n", m.Name);	// 사용
    m.Age = 21;
    printf("%d\n", m.Age);
    m.Weight = 100.05;
    printf("%.2f\n", m.Weight);

    //printf("%s, %d, %.2f\n", m.Name, m.Age, m.Weight);

    return 0;
}
