#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* push(struct node* front ,struct node* last)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode!=NULL)
    {
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(front->next==NULL)front->next=newnode;
        last->next=newnode;
        last=newnode;
    }
    return last;
}

void pop(struct node* front)
{
    struct node* tmp=(struct node*)malloc(sizeof(struct node));
    if(tmp!=NULL)
    {
        tmp=front->next;
        front->next=tmp->next;
        free(tmp);
    }
}

void print(struct node* front)
{
    front=front->next;
    while(front!=NULL)
    {
        printf("%d ",front->data);
        front=front->next;
    }
    printf("\n");
}


int main()
{
    struct node *front,*last;
    front=(struct node*)malloc(sizeof(struct node));
    last=(struct node*)malloc(sizeof(struct node));
    if(front!=NULL)
    {
        printf("Enter queue size : ");
        int n;scanf("%d",&n);
        int choice;
        front->next=NULL;last->next=NULL;
        for(int i=0;i<n;i++)
        {
            printf("Enter 1 for push or 2 for pop or 3 for print or 4 for nothing or 5 for out : ");
            scanf("%d",&choice);
            if(choice==1)
            {
                last=push(front,last);
            }
            else if(choice==2)
            {
                if(front->next!=NULL)pop(front);
            }
            else if(choice==3)
            {
                print(front);
            }
            else if(choice==4)
            {
                continue;
            }
            else break;
        }
        print(front);
    }
}