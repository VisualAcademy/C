#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASS_LENGTH 10 // ��й�ȣ ���̸� 10���� ����

int main(void)
{
    char password[PASS_LENGTH + 1]; // ��й�ȣ�� ������ �迭, �� ���ڸ� ���� +1
    int i;

    srand(time(NULL)); // ���� �õ带 ���� �ð����� ����

    for (i = 0; i < PASS_LENGTH; i++)
    {
        password[i] = 'a' + rand() % 26; // ������ �ҹ��ڸ� ��й�ȣ�� ����
    }

    password[i] = '\0'; // ���ڿ��� ���� �� ���� �߰�

    printf("������ ��й�ȣ: %s\n", password); // ������ ��й�ȣ ���

    return 0;
}
