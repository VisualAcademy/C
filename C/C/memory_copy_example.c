/* �޸𸮸� �����ϴ� �Լ� ����� */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// MemoryData ����ü ����
typedef struct {
	int x;
	int y;
	char buffer[30];
} MemoryData;

// �Լ� ���� ����
void* custom_memcpy(void* dest, const void* src, size_t count);
void display_buffer(const MemoryData* mem_data);

int main(void)
{
	MemoryData mem_data1, mem_data2;

	// mem_data1 �ʱ�ȭ
	mem_data1.x = 5;
	mem_data1.y = 10;
	strcpy(mem_data1.buffer, "memory copy");

	// mem_data1�� ������ mem_data2�� ����
	custom_memcpy(&mem_data2, &mem_data1, sizeof(mem_data1));

	// mem_data2�� ���۸� ���
	display_buffer(&mem_data2);

	return 0;
}

// custom_memcpy �Լ� ����
// dest: ������ ������ �޸� �ּ�
// src: ������ ���� �޸� �ּ�
// count: ������ ����Ʈ ��
void* custom_memcpy(void* dest, const void* src, size_t count)
{
	void* ret = dest;

	// ���� �޸𸮿��� ������ �޸𸮷� ����Ʈ ������ ����
	while (count--)
	{
		*(char*)dest = *(char*)src;
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}

	return ret;
}

// display_buffer �Լ� ����
// mem_data: ����� MemoryData ����ü�� �ּ�
void display_buffer(const MemoryData* mem_data)
{
	puts(mem_data->buffer);
}
