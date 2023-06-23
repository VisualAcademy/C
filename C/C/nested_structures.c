#include <stdio.h>

// 주소 정보를 나타내는 구조체
struct Address
{
    char street[50]; // 거리명
    char city[50];   // 도시명
    char zipCode[10];// 우편번호
};

// 학생 정보를 나타내는 구조체
struct Student
{
    char name[50];              // 학생 이름
    struct Address address;    // 주소 정보 (Address 구조체를 사용)
};

int main(void)
{
    // 학생 구조체 변수를 초기화. 주소 정보도 함께 초기화한다.
    struct Student student1 = { "철수", {"123번길", "서울", "12345"} };

    // 학생 정보를 출력
    printf("이름: %s\n", student1.name);
    printf("주소: %s, %s, %s\n", student1.address.street, student1.address.city, student1.address.zipCode);

    return 0;
}
