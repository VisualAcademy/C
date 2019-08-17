/*
	축차 탐색법 : 순차 검색(Sequential Search)
*/
#include <stdio.h>
#include <string.h>

#define N 5 // 데이터 수

void main(void)
{
	static struct MyFriend
	{
		char* name;
		int age;
	}myFriend[] = { "aa", 11, "bb", 22, "cc", 33, "dd", 44, "ee", 55 };

	char key[20];
	int i;

	printf("검색 데이터 : "); scanf("%s", key);
	i = 0;
	while (i < N && strcmp(key, myFriend[i].name) != 0)
	{
		i++;
	}

	if (i < N)
	{
		printf("%s %d\n", myFriend[i].name, myFriend[i].age);
	}
	else
	{
		printf("찾을 수 없습니다.");
	}
}
