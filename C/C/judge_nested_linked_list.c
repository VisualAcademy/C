#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��� ����ü
typedef struct Member
{
    char name[50];    // ��� �̸�
    struct Member* next;   // ���� ����� ����Ű�� ������
} Member;

// ��� ����ü
typedef struct Guild
{
    char name[50];    // ��� �̸�
    Member* members;  // ��� ���� ����Ʈ�� ù ��° ��Ҹ� ����Ű�� ������
    struct Guild* next;   // ���� ��带 ����Ű�� ������
} Guild;

// ��ø ���� ����Ʈ�� ���Ϸ� �����ϴ� �Լ�
void save_guild(Guild* guild_list, FILE* file)
{
    Guild* g = guild_list;
    Member* m;
    while (g != NULL)  // ��� ����Ʈ�� ��ȸ
    {
        fwrite(g->name, sizeof(char), 50, file);  // ��� �̸��� ���Ͽ� ����
        m = g->members;
        while (m != NULL)  // �ش� ����� ��� ����Ʈ�� ��ȸ
        {
            fwrite(m->name, sizeof(char), 50, file);  // ��� �̸��� ���Ͽ� ����
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

// ���Ͽ��� ��ø ���� ����Ʈ�� �о���� �Լ�
Guild* load_guild(FILE* file)
{
    Guild* guild_list = NULL;
    Guild* g = NULL;
    Member* m = NULL;
    char name[50];

    // ���Ͽ��� �̸��� �о�ͼ� ���� ����� �����ϰ�, ���� ����Ʈ�� �߰�
    while (fread(name, sizeof(char), 50, file))
    {
        if (g == NULL || (g != NULL && m != NULL && m->next == NULL))  // �� ��� ����
        {
            // ���ο� ��� ��� ���� �� �߰�
            Guild* new_guild = (Guild*)malloc(sizeof(Guild));
            strcpy(new_guild->name, name);
            new_guild->members = NULL;
            new_guild->next = NULL;

            // ù ��° ��� ����� ���
            if (guild_list == NULL)
            {
                guild_list = new_guild;
            }
            else  // �̹� ��� ��尡 �ִ� ���
            {
                Guild* tmp = guild_list;
                while (tmp->next != NULL)  // ������ ��带 ã�Ƽ�
                {
                    tmp = tmp->next;
                }
                tmp->next = new_guild;  // �� ��带 ����
            }

            g = new_guild;  // ���� ��� ������Ʈ
            m = NULL;  // ���� ��� �ʱ�ȭ
        }
        else  // ���� ��� ���� ���
        {
            // ���ο� ��� ��� ���� �� �߰�
            Member* new_member = (Member*)malloc(sizeof(Member));
            strcpy(new_member->name, name);
            new_member->next = NULL;

            // ù ��° ��� ����� ���
            if (g->members == NULL)
            {
                g->members = new_member;
            }
            else  // �̹� ��� ��尡 �ִ� ���
            {
                Member* tmp = g->members;
                while (tmp->next != NULL)  // ������ ��带 ã�Ƽ�
                {
                    tmp = tmp->next;
                }
                tmp->next = new_member;  // �� ��带 ����
            }

            m = new_member;  // ���� ��� ������Ʈ
        }
    }

    return guild_list;
}

// ��ø ���� ����Ʈ�� ����ϴ� �Լ�
void print_guild(Guild* guild_list)
{
    Guild* g = guild_list;
    Member* m;
    while (g != NULL)  // ��� ����Ʈ�� ��ȸ
    {
        printf("Guild: %s\n", g->name);  // ��� �̸� ���
        m = g->members;
        while (m != NULL)  // �ش� ����� ��� ����Ʈ�� ��ȸ
        {
            printf("  Member: %s\n", m->name);  // ��� �̸� ���
            m = m->next;
        }
        g = g->next;
    }
}

int main(void)
{
    // ��ø ���� ����Ʈ ���� (������ ������ ���)
    Guild guild1 = { "Winter", NULL, NULL };
    Member mem1 = { "Darren", NULL };
    Member mem2 = { "Marlo", &mem1 };
    Member mem3 = { "Marvin", &mem2 };
    guild1.members = &mem3;

    // ��ø ���� ����Ʈ�� ���Ϸ� ����
    FILE* file = fopen("data.bin", "wb");
    save_guild(&guild1, file);
    fclose(file);

    // ������ ��ø ���� ����Ʈ�� ���Ͽ��� �о����
    file = fopen("data.bin", "rb");
    Guild* guild_list = load_guild(file);
    fclose(file);

    // �о�� ��ø ���� ����Ʈ ���
    print_guild(guild_list);

    printf("\n");

    // ��� ���� 
    remove_member(guild_list, 1, 0);

    print_guild(guild_list);

    return 0;
}
