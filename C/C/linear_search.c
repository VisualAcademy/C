#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� ���� ��� �����ϵ��� ����
#include <stdio.h>
#define SIZE 5

int main(void)
{
    int arr[SIZE], key, index = -1; // �迭, Ű, �ε��� �ʱ�ȭ

    // ����ڷκ��� 5���� ������ �Է¹޾� �迭�� ����
    printf("5���� ������ �Է��ϼ���:\n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    // ����ڷκ��� ã�� ����(Ű)�� �Է¹���
    printf("ã�� ���ڸ� �Է��ϼ���: ");
    scanf("%d", &key);

    // ���� �˻� �˰����� ����Ͽ� Ű�� ��ġ�ϴ� ���Ҹ� ã��
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == key)
        {
            index = i; // Ű�� ��ġ�ϴ� ������ �ε����� ����
            break; // �� �̻� �˻��� �ʿ䰡 �����Ƿ� �ݺ����� ����
        }
    }

    // ã�� ������ �ε����� ����ϰų�, ���Ҹ� ã�� �������� �˸�
    if (index != -1)
    {
        printf("ã�� ���� %d�� �ε���: %d\n", key, index);
    }
    else
    {
        printf("ã�� ���߽��ϴ�.\n");
    }
    return 0;
}
