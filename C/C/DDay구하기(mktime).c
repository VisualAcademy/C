/*
    mktime() : ��¥ �� �ð��� ���ϰų� ����
    ctime() : time_t�� ���ڿ��� ��ȯ
*/
#include <stdio.h>
#include <time.h>

#define DAYSECOND 86400L

int main(void)
{
    // �� ����
    time_t now;
    // �ð� ����ü: ���� �ð�, ũ�������� �ð�
    struct tm t = { 0 }, dday = { 0, 0, 0, 25, 11, 105 }; // ���� 0���� �����ϹǷ� 11�� 12���� �ǹ���
    // ���� ����
    int n1, n2, nDday;

    // �� ���
    now = time(NULL);
    // ���� �ð� ���
    t = *localtime(&now);

    // ���� �ð� �� ��/��/�ʸ� �ʱ�ȭ
    t.tm_hour = 0;
    t.tm_min = 0;
    t.tm_sec = 0;

    // �ð� ����ü �������� ��ȯ
    dday.tm_year += 100; // 2005���� 1900����� 105���� ���� �����̹Ƿ�, 100�� ���ؾ� ��
    dday.tm_mon -= 1;

    // ���� �ð� ���
    n1 = mktime(&t);
    // ũ�������� �ð� ���
    n2 = mktime(&dday);

    // ���̰� ���
    nDday = (n2 - n1) / DAYSECOND;

    // ��� ���
    printf("���� ��¥: %s", ctime(&now));
    printf("ũ��������: %d�� ����\n", nDday);

    return 0;
}
