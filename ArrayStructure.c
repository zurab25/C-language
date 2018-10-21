#include <stdio.h>

struct person 
{
    int age;
    char name[20];
};

int main(void)
{
    struct person people[] = {23, "Tom", 32, "Bob", 41,"Sam"};
    int n = sizeof(people)/sizeof(people[0]);

    for(int i=0; i<n;i++)
    {
        printf("Name: %s \t Age: %d \n", people[i].name, people[i].age);
    }

    return 0;
}