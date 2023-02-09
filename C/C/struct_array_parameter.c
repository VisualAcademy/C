#include <stdio.h>

struct point
{
    int x;
    int y;
};

void printPointArray(struct point points[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("(%d, %d)\n", points[i].x, points[i].y);
    }
}

int main(void)
{
    struct point points[] = { {1, 2}, {3, 4}, {5, 6} };
    int length = sizeof(points) / sizeof(points[0]);
    printPointArray(points, length);
    return 0;
}
