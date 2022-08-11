#include <stdio.h>
#include <stdlib.h>

struct score {
	int kor; int eng;
};

struct student {
	int num;
	struct score scores;
};

int main()
{
	struct student s[3] = { {1, {100, 90}}, {2, {90, 80}}, {3, {80, 70}} };

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d: %3d, %3d\n", s[i].num, s[i].scores.kor, s[i].scores.eng);
	}

	system("pause");
	return 0;
}
