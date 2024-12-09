#include<stdio.h>
char stack[500];
char parenthesis[500];
int top=-1;
void push(char a)
{
    top++;
    stack[top]=a;
}
void pop()
{
    stack[top]='\0';
    top--;
}
char acces()
{
    return stack[top];
}
int main()
{
    printf("Enter the parenthesis : ");
    scanf("%s",parenthesis);
    int i=0;
    printf("\n\n symbol scanned\t\tstack\n");
    while(parenthesis[i]!='\0')
    {
        printf("\t%c\t\t",parenthesis[i]);
        if(parenthesis[i]=='(' ||parenthesis[i]=='{'||parenthesis[i]=='[')
        {
            push(parenthesis[i]);
        }
        else if(parenthesis[i]==')')
        {
            if(acces()=='(')
            {
                pop();
            }
            else
            {
                printf("%s\n",stack);
                printf("Not correct");
                return 0;
            }
        }
         else if(parenthesis[i]=='}')
        {
            if(acces()=='{')
            {
                pop();
            }
            else
            {
                 printf("%s\n",stack);
                printf("Not correct");
                return 0;
            }
        }
         else if(parenthesis[i]==']')
        {
            if(acces()=='[')
            {
                pop();
            }
            else
            {
                printf("Not correct");
                 printf("%s\n",stack);
                return 0;
            }
        }
        printf("%s\n",stack);
        i++;
    }
    if(top==-1)
    {
        printf("correct");
    }
    else
    {
        printf("Not correct");
    }
}
