#include <stdio.h>

struct Person
{
    char name[100];
    int age;
};

void printPerson(struct Person person)
{
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
}

int main(void)
{
    struct Person person = { "John Doe", 30 };
    printPerson(person);
    return 0;
}
