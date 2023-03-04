#include <stdio.h>

int main(void) {
    int first_num = 3, second_num = 5, greater, smaller;
    greater = first_num > second_num;
    smaller = first_num < second_num;
    printf("first_num = %d second_num = %d "
        "first_num > second_num = %d "
        "first_num < second_num = %d\n",
        first_num, second_num, greater, smaller);
    return 0;
}
