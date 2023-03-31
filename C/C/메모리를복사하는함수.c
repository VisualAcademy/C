/* 메모리를 복사하는 함수 만들기 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// MemoryData 구조체 정의
typedef struct {
	int x;
	int y;
	char buffer[30];
} MemoryData;

// 함수 원형 선언
void* custom_memcpy(void* dest, const void* src, size_t count);
void display_buffer(const MemoryData* mem_data);

int main(void)
{
	MemoryData mem_data1, mem_data2;

	// mem_data1 초기화
	mem_data1.x = 5;
	mem_data1.y = 10;
	strcpy(mem_data1.buffer, "memory copy");

	// mem_data1의 내용을 mem_data2로 복사
	custom_memcpy(&mem_data2, &mem_data1, sizeof(mem_data1));

	// mem_data2의 버퍼를 출력
	display_buffer(&mem_data2);

	return 0;
}

// custom_memcpy 함수 구현
// dest: 복사할 목적지 메모리 주소
// src: 복사할 원본 메모리 주소
// count: 복사할 바이트 수
void* custom_memcpy(void* dest, const void* src, size_t count)
{
	void* ret = dest;

	// 원본 메모리에서 목적지 메모리로 바이트 단위로 복사
	while (count--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}

	return ret;
}

// display_buffer 함수 구현
// mem_data: 출력할 MemoryData 구조체의 주소
void display_buffer(const MemoryData* mem_data)
{
	puts(mem_data->buffer);
}
