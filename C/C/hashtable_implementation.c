#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

// 해시 테이블에 저장할 데이터 아이템 구조체 정의
struct DataItem
{
    int key;
    int data;
};

struct DataItem* hashArray[TABLE_SIZE]; // 해시 테이블
struct DataItem* dummyItem; // 더미 아이템

// 키를 받아서 해당 키의 해시 코드를 계산하는 함수
int hashCode(int key)
{
    return key % TABLE_SIZE;
}

// 키와 데이터를 받아서, 새로운 데이터 아이템을 생성하고 이를 해시 테이블에 삽입하는 함수
void insert(int key, int data)
{
    struct DataItem* item = (struct DataItem*)malloc(sizeof(struct DataItem));
    item->key = key;
    item->data = data;

    // 해시 코드를 계산해서, 데이터 아이템이 삽입될 위치를 결정
    int hashIndex = hashCode(key);

    // 이미 해당 위치에 데이터 아이템이 있다면, 다음 위치를 찾는다.
    while (hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1)
    {
        hashIndex = hashCode(hashIndex + 1);
    }

    hashArray[hashIndex] = item; // 데이터 아이템 삽입
}

// 키를 받아서, 해당 키를 가진 데이터 아이템을 해시 테이블에서 검색하는 함수
struct DataItem* search(int key)
{
    // 해시 코드를 계산해서, 데이터 아이템이 위치한 인덱스를 찾는다.
    int hashIndex = hashCode(key);

    // 그 위치에서부터 데이터 아이템을 찾는다.
    while (hashArray[hashIndex] != NULL)
    {
        if (hashArray[hashIndex]->key == key)
            return hashArray[hashIndex]; // 데이터 아이템을 찾았다면 반환

        hashIndex = hashCode(hashIndex + 1);
    }

    return NULL; // 데이터 아이템을 찾지 못했다면 NULL 반환
}

// 해시 테이블의 내용을 출력하는 함수
void display()
{
    int i = 0;

    for (i = 0; i < TABLE_SIZE; i++)
    {
        if (hashArray[i] != NULL)
            printf("(%d,%d) ", hashArray[i]->key, hashArray[i]->data);
        else
            printf("NULL ");
    }

    printf("\n");
}

int main(void)
{
    // 예제 코드
    insert(1, 20);
    insert(2, 70);
    insert(42, 80);
    insert(4, 25);
    insert(12, 44);
    insert(14, 32);
    insert(17, 11);
    insert(13, 78);
    insert(37, 97);

    display();

    struct DataItem* item = search(37);
    if (item != NULL)
    {
        printf("원소를 찾았습니다: %d\n", item->data);
    }
    else
    {
        printf("원소를 찾지 못했습니다\n");
    }

    return 0;
}
