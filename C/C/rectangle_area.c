#define _CRT_SECURE_NO_WARNINGS // Visual Studio���� �������� ���� �Լ� ��� �����ϵ��� ��
#include <stdio.h>

// ���簢���� ���̸� ����ϴ� �Լ�
int rectangle_area(int width, int height)
{
    return width * height; // ���� * ����
}

int main(void)
{
    int width, height;

    // ����ڷκ��� ���簢���� ���ο� ���� ���̸� �Է¹���
    printf("���簢���� ���ο� ���� ���̸� �Է��ϼ���: ");
    scanf("%d %d", &width, &height);

    // ���� ���̸� ���
    printf("���簢���� ����: %d\n", rectangle_area(width, height));

    return 0;
}
