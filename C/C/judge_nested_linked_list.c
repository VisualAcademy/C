#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 멤버 구조체
typedef struct Member
{
    char name[50];    // 멤버 이름
    struct Member* next;   // 다음 멤버를 가리키는 포인터
} Member;

// 길드 구조체
typedef struct Guild
{
    char name[50];    // 길드 이름
    Member* members;  // 멤버 연결 리스트의 첫 번째 요소를 가리키는 포인터
    struct Guild* next;   // 다음 길드를 가리키는 포인터
} Guild;

// 중첩 연결 리스트를 파일로 저장하는 함수
void save_guild(Guild* guild_list, FILE* file)
{
    Guild* g = guild_list;
    Member* m;
    while (g != NULL)  // 길드 리스트를 순회
    {
        fwrite(g->name, sizeof(char), 50, file);  // 길드 이름을 파일에 저장
        m = g->members;
        while (m != NULL)  // 해당 길드의 멤버 리스트를 순회
        {
            fwrite(m->name, sizeof(char), 50, file);  // 멤버 이름을 파일에 저장
            m = m->next;
        }
        g = g->next;
    }
}

void remove_member(Guild* guild_list, int guild_index, int member_index)
{
    Guild* g = guild_list;
    Member* m;
    Member* prev = NULL;
    int i;

    for (i = 0; i < guild_index; i++)
    {
        g = g->next;
        if (g == NULL) return;
    }

    m = g->members;

    for (i = 0; i < member_index; i++)
    {
        prev = m;
        m = m->next;
        if (m == NULL) return;
    }

    if (prev == NULL)
    {
        g->members = m->next;
    }
    else
    {
        prev->next = m->next;
    }
    free(m);
}

// 파일에서 중첩 연결 리스트를 읽어오는 함수
Guild* load_guild(FILE* file)
{
    Guild* guild_list = NULL;
    Guild* g = NULL;
    Member* m = NULL;
    char name[50];

    // 파일에서 이름을 읽어와서 길드와 멤버를 생성하고, 연결 리스트에 추가
    while (fread(name, sizeof(char), 50, file))
    {
        if (g == NULL || (g != NULL && m != NULL && m->next == NULL))  // 새 길드 시작
        {
            // 새로운 길드 노드 생성 및 추가
            Guild* new_guild = (Guild*)malloc(sizeof(Guild));
            strcpy(new_guild->name, name);
            new_guild->members = NULL;
            new_guild->next = NULL;

            // 첫 번째 길드 노드인 경우
            if (guild_list == NULL)
            {
                guild_list = new_guild;
            }
            else  // 이미 길드 노드가 있는 경우
            {
                Guild* tmp = guild_list;
                while (tmp->next != NULL)  // 마지막 노드를 찾아서
                {
                    tmp = tmp->next;
                }
                tmp->next = new_guild;  // 새 노드를 연결
            }

            g = new_guild;  // 현재 길드 업데이트
            m = NULL;  // 현재 멤버 초기화
        }
        else  // 같은 길드 내의 멤버
        {
            // 새로운 멤버 노드 생성 및 추가
            Member* new_member = (Member*)malloc(sizeof(Member));
            strcpy(new_member->name, name);
            new_member->next = NULL;

            // 첫 번째 멤버 노드인 경우
            if (g->members == NULL)
            {
                g->members = new_member;
            }
            else  // 이미 멤버 노드가 있는 경우
            {
                Member* tmp = g->members;
                while (tmp->next != NULL)  // 마지막 노드를 찾아서
                {
                    tmp = tmp->next;
                }
                tmp->next = new_member;  // 새 노드를 연결
            }

            m = new_member;  // 현재 멤버 업데이트
        }
    }

    return guild_list;
}

// 중첩 연결 리스트를 출력하는 함수
void print_guild(Guild* guild_list)
{
    Guild* g = guild_list;
    Member* m;
    while (g != NULL)  // 길드 리스트를 순회
    {
        printf("Guild: %s\n", g->name);  // 길드 이름 출력
        m = g->members;
        while (m != NULL)  // 해당 길드의 멤버 리스트를 순회
        {
            printf("  Member: %s\n", m->name);  // 멤버 이름 출력
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

    printf("\n");

    // 멤버 삭제 
    remove_member(guild_list, 1, 0);

    print_guild(guild_list);

    return 0;
}
