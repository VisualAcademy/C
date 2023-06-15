#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Member와 Guild 구조체를 typedef를 사용하여 선언
typedef struct Member
{
    char name[50];
    struct Member* next;
} Member;

typedef struct Guild
{
    char name[50];
    Member* members;
    struct Guild* next;
} Guild;

// 중첩 연결 리스트를 파일로 저장하는 함수
void save_guild(Guild* guild_list, FILE* file)
{
    Guild* g = guild_list;
    Member* m;
    while (g != NULL) // 길드 리스트를 순회
    {
        fwrite(g->name, sizeof(char), 50, file); // 길드 이름을 파일에 저장
        m = g->members;
        while (m != NULL) // 해당 길드의 멤버 리스트를 순회
        {
            fwrite(m->name, sizeof(char), 50, file); // 멤버 이름을 파일에 저장
            m = m->next;
        }
        g = g->next;
    }
}

// 파일에서 중첩 연결 리스트를 읽어오는 함수
Guild* load_guild(FILE* file)
{
    Guild* guild_list = NULL;
    Guild* g = NULL;
    Member* m = NULL;
    char name[50];

    while (fread(name, sizeof(char), 50, file)) // 파일을 한 줄씩 읽음
    {
        // 구조체 인스턴스 생성 및 연결 리스트에 추가하는 과정
        // 여기서 g는 현재 길드를, m은 현재 멤버를 가리킴
        // 이름을 읽을 때마다 새로운 구조체 인스턴스를 만들고, 연결 리스트에 추가
    }

    return guild_list;
}

// 중첩 연결 리스트를 출력하는 함수
void print_guild(Guild* guild_list)
{
    Guild* g = guild_list;
    Member* m;
    while (g != NULL) // 길드 리스트를 순회
    {
        printf("Guild: %s\n", g->name);
        m = g->members;
        while (m != NULL) // 해당 길드의 멤버 리스트를 순회
        {
            printf("  Member: %s\n", m->name);
            m = m->next;
        }
        g = g->next;
    }
}

int main(void)
{
    // 중첩 연결 리스트 생성 (임의의 데이터 사용)
    Guild guild1 = { "Winter", NULL, NULL };
    Member mem1 = { "Darren", NULL };
    Member mem2 = { "Marlo", &mem1 };
    Member mem3 = { "Marvin", &mem2 };
    guild1.members = &mem3;

    // 중첩 연결 리스트를 파일로 저장
    FILE* file = fopen("data.bin", "wb");
    save_guild(&guild1, file);
    fclose(file);

    // 저장한 중첩 연결 리스트를 파일에서 읽어오기
    file = fopen("data.bin", "rb");
    Guild* guild_list = load_guild(file);
    fclose(file);

    // 읽어온 중첩 연결 리스트 출력
    print_guild(guild_list);

    return 0;
}
