#include <stdio.h>

// ������ ������ ���ڷ� �޾� �ش��ϴ� ������ ���������� ��ȯ�ϴ� �Լ�
char get_grade(int score)
{
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F';
}

int main(void)
{
    int score = 85;
    char grade = get_grade(score);
    printf("���� %d => ���� %c\n", score, grade);

    return 0;
}
