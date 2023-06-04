#include <stdio.h>

typedef struct Person
{
    int age;
    void (*grow_older)(struct Person*);
} Person;

// Person ����ü�� age�� ������Ű�� �Լ�
void grow_older_by_one_year(Person* person)
{
    person->age++;
}

int main(void)
{
    // ����ü �ʱ�ȭ ��, �Լ� ������ ����� �Լ��� �ּ� �Ҵ�
    Person person = { .age = 21, .grow_older = grow_older_by_one_year };

    printf("���� ����: %d��\n", person.age);
    person.grow_older(&person);  // �Լ� �����͸� ���� �Լ� ȣ��
    printf("1�� �� ����: %d��\n", person.age);

    return 0;
}
