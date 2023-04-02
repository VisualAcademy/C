#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[20];
    float salary;
} Employee;

int main(void)
{
    Employee emp;

    // 구조체를 0으로 초기화
    memset(&emp, 0, sizeof(emp));

    printf("ID: %d, 이름: %s, 급여: %.2f\n", emp.id, emp.name, emp.salary);

    // 구조체의 멤버를 설정
    emp.id = 1;
    strncpy(emp.name, "홍길동", sizeof(emp.name) - 1);
    emp.salary = 50000.0f;

    printf("ID: %d, 이름: %s, 급여: %.2f\n", emp.id, emp.name, emp.salary);

    return 0;
}
