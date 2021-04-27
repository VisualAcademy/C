#include <stdio.h>

int main(int argc, char* argv[])
{
    // Command Line Argument
    printf("%d\n", argc);
    printf("%s\n", argv[0]); // CommandLineDemo.exe
    if (argc > 1)
        printf("%s\n", argv[1]);
    return 0;
}
