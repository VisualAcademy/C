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

    // ����ü�� 0���� �ʱ�ȭ
    memset(&emp, 0, sizeof(emp));

    printf("ID: %d, �̸�: %s, �޿�: %.2f\n", emp.id, emp.name, emp.salary);

    // ����ü�� ����� ����
    emp.id = 1;
    strncpy(emp.name, "ȫ�浿", sizeof(emp.name) - 1);
    emp.salary = 50000.0f;

    printf("ID: %d, �̸�: %s, �޿�: %.2f\n", emp.id, emp.name, emp.salary);

    return 0;
}
