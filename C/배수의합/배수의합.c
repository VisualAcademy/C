//[!] 1���� 100���� 
//3�� ��� �Ǵ� 4�� ����� ���� ���ϴ� ���α׷��� �ۼ� : 2551 
#include <stdio.h>
void main() {
    //[1] Initilize
    int i; // ���� �ݺ���.
    //[2] Input
    int sum = 0;
    //[3] Process : Algorithm : Logic => ����
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 || i % 4 == 0) {
            sum += i; // ����(Sum)
        }
    }
    //[4] Output
    printf("1~100���� ����� : %d\n", sum);
    //[5] Dispose
    // Empty
}
