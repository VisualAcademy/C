#include <stdio.h>
#include <stdlib.h>

// �޸� �Ҵ� �Լ�
void* get_memory(int size)
{
    void* ptr = malloc(size);  // ���ϴ� ũ�⸸ŭ�� �޸𸮸� �������� �Ҵ�
    return ptr;  // �Ҵ�� �޸��� �ּҸ� ��ȯ
}

int main(void)
{
    int* int_ptr = (int*)get_memory(sizeof(int));  // int ũ�⸸ŭ �޸� �Ҵ�
    *int_ptr = 5;  // �Ҵ�� �޸𸮿� 5 ����
    printf("int_ptr�� ����� ��: %d\n", *int_ptr);  // ����� �� ���
    free(int_ptr);  // �޸� ����

    char* char_ptr = (char*)get_memory(sizeof(char));  // char ũ�⸸ŭ �޸� �Ҵ�
    *char_ptr = 'A';  // �Ҵ�� �޸𸮿� 'A' ����
    printf("char_ptr�� ����� ��: %c\n", *char_ptr);  // ����� �� ���
    free(char_ptr);  // �޸� ����

    float* float_ptr = (float*)get_memory(sizeof(float));  // float ũ�⸸ŭ �޸� �Ҵ�
    *float_ptr = 3.14;  // �Ҵ�� �޸𸮿� 3.14 ����
    printf("float_ptr�� ����� ��: %f\n", *float_ptr);  // ����� �� ���
    free(float_ptr);  // �޸� ����

    return 0;
}
