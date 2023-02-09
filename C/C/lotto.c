#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 45
#define NUM_SELECTED 6

int main(void)
{
    int lotto_numbers[NUM_SELECTED];
    int i, j, random_num;

    srand(time(NULL));

    for (i = 0; i < NUM_SELECTED; i++) 
    {
        random_num = rand() % MAX_NUM + 1;

        for (j = 0; j < i; j++) 
        {
            if (lotto_numbers[j] == random_num) 
            {
                i--;
                break;
            }
        }

        lotto_numbers[i] = random_num;
    }

    for (i = 0; i < NUM_SELECTED; i++) 
    {
        for (j = i + 1; j < NUM_SELECTED; j++) 
        {
            if (lotto_numbers[i] > lotto_numbers[j]) 
            {
                int temp = lotto_numbers[i];
                lotto_numbers[i] = lotto_numbers[j];
                lotto_numbers[j] = temp;
            }
        }
    }

    printf("Your Lotto numbers: ");
    for (i = 0; i < NUM_SELECTED; i++) 
    {
        printf("%d ", lotto_numbers[i]);
    }
    printf("\n");

    return 0;
}
