#include <stdio.h>
#include <string.h>

struct Person
{
    char name[30];
    int age;
    char home[30];
    char university[20];
} p1;

int main()
{
    printf("Enter Person Information :\n");

    printf("Name: ");
    scanf("%s", p1.name);
    printf("Age: ");
    scanf(" %d", &p1.age);
    printf("Home: ");
    scanf(" %s", p1.home);
    printf("University: ");
    scanf(" %s", p1.university);

    printf("\nPerson Information :\n");
    printf("Name: ");
    printf("%s\n", p1.name);
    printf("Age: ");
    printf("%d\n", p1.age);
    printf("Home: ");
    printf("%s\n", p1.home);
    printf("University: ");
    printf("%s\n", p1.university);

    return 0;
}
