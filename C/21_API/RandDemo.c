// 내장 함수 : 랜덤값 출력(임의값 출력)
#include <stdio.h> // printf(), scanf(), ...
#include <stdlib.h> // rand(), ...
#include <time.h> // time()

int main()
{
    int i = 0;
    int r = 0;
    int l = 0;

    //[1] 난수 초기값 설정
    srand((unsigned)time(0));

    //[!] 로또 번호 생성기: 1~45까지의 수를 5개 랜덤하게 출력
    for (i = 0; i < 5; i++)
    {
        // rand() 함수는 0 ~ 32767 중 하나를 출력
        l = rand() % 45 + 1; // rand() % 45 => 0~44까지 중 하나가 나옴
        printf("%d", l);
        if (i == 4)
        {
            printf("\n");
        }
        else
        {
            printf(",\t");
        }
    }

    return 0;
}
