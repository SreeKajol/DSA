#include <stdio.h>
#define m 5
int stack[m], top = -1;
void push(int x)
{
    if (top == m - 1)
        printf("over flow\n");
    else
    {
        top++;
        stack[top] = x;
    }
}
int pop()
{
    //  if(top==0){printf("stack is empty\n");return -1;}
    if (top < 0)
    {
        printf("stack is empty\n");
        return -1;
    } // uporer line dile to sobar nicher ta print korbe na
    else
    {
        int x = stack[top];
        top = top - 1;
        return x;
    }
}
int main()
{

    printf("enter push element:");
    for (int i = 1; i <= 5; i++)
    {
        int x;
        scanf("%d", &x);
        push(x);
    }
    // printf("%d \n",top);
    printf("pop is start:");
    for (int i = 1; i <= 2; i++)
    {
        int x = pop();
        printf("pop element is %d\n", x);
    }

    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);

    return 0;
}
