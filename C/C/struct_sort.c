#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//����� ��Ÿ���� ����ü
typedef struct
{
    int id; //����� id
    char name[20]; //����� �̸�
    int age; //����� ����
} Person;

//���̸� �������� �� ����� ���ϴ� �Լ�
int compare(const void* a, const void* b)
{
    return ((Person*)a)->age - ((Person*)b)->age;
}

int main(void)
{
    //������� ��Ÿ���� �迭
    Person people[] =
    {
        {1, "ȫ�浿", 20},
        {2, "��λ�", 25},
        {3, "�Ӳ���", 30},
        {4, "�Ѷ��", 28},
    };
    int n = sizeof(people) / sizeof(people[0]);

    printf("���ĵ��� ���� �����:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: %s, %d\n", people[i].id, people[i].name, people[i].age);
    }

    //���̸� �������� ������� ����
    qsort(people, n, sizeof(Person), compare);

    printf("���̺��� ���ĵ� �����:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d: %s, %d\n", people[i].id, people[i].name, people[i].age);
    }

    return 0;
}
