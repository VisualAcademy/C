#include <stdio.h>

void main(void)
{
    //[1] Input
    double dblNum = 3.777;

    //[2] Process
    dblNum = (int)((dblNum + 0.05) * 10) / 10.0;

    //[3] Output
    printf("¹Ý¿Ã¸²: %.2f\n", dblNum);//3.80
}
