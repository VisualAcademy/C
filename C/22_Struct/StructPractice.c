#include <stdio.h>

// ���� ����ü ����
struct score {
    int kor; int eng;
};

// �л� ����ü ����
struct student {
    int num;
    struct score scores;
};

main()
{
    struct student s[3] = { {1, {100, 90}}, {2, {90, 80}}, {3, {80, 70}} };

    for (int i = 0; i < 3; i++)
    {
        printf("%d: %3d, %3d\n", s[i].num, s[i].scores.kor, s[i].scores.eng);
    }
}
