#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void push(struct node* top)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode!=NULL)
    {
        scanf("%d",&newnode->data);
        newnode->next=top->next;
        top->next=newnode;
    }
}

void pop(struct node* top)
{
    struct node* tmp=(struct node*)malloc(sizeof(struct node));
    if(top->next!=NULL)
    {
        tmp=top->next;
        top->next=tmp->next;
        free(tmp);
    }
}

void print(struct node* top)
{
    top=top->next;
    while(top!=NULL)
    {
        printf("%d ",top->data);
        top=top->next;
    }
    printf("\n");
}

int main()
{
    struct node *top;
    top=(struct node*)malloc(sizeof(struct node));
    if(top!=NULL)
    {
        top->next=NULL;
        printf("Enter stack size : ");
        int n;scanf("%d",&n);
        while(n--)
        {
            int choice;
            printf("Enter 1 for push or 2 for pop or 3 for print or 4 for break : ");
            scanf("%d",&choice);
            if(choice==1)
            {
                push(top);
            }
            else if(choice==2)
            {
                pop(top);
            }
            else if(choice==3)
            {
                print(top);
            }
            else break;
        }
        print(top);
    }
}