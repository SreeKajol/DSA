#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id;
    int age;
    char name[30];
};
int main()
{
    struct student data[40];
    for(int i=0;i<40;i++)
    {
        scanf("%d",&data[i].age);
        scanf("%d",&data[i].id);
        scanf("%s",&data[i].name);
    }
    for(int i=0;i<40;i++)
    {
        printf("%d\n",data[i].age);
        printf("%d\n",data[i].id);
        printf("%s\n",data[i].name);
        printf("\n");
    }
}