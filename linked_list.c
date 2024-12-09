#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insertatbeginning(struct node *head)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode != NULL)
    {
        scanf("%d", &newnode->data);
        newnode->next = head->next;
        head->next = newnode;
    }
}

void insertatmiddle(struct node* head)
{
    struct node* prev=head;
    struct node* current=head->next;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    int index,indx;
    printf("Enter where you want to add a new node : ");scanf("%d",&index);
    if(newnode!=NULL)
    {
        printf("Enter the value of new node : ");
        scanf("%d",&newnode->data);
        indx=index;
        while(index--)
        {
            prev=current;
            current=current->next;
            if(current==NULL && index>0)
            {
                printf("There is no index %d in the list.\n",indx);
                return;
            }
        }
        prev->next=newnode;
        newnode->next=current;
    }
}

void insertatending(struct node *head)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode != NULL)
    {
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        struct node *last = head;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = newnode;
    }
}

void print(struct node *head)
{
    head = head->next;
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void searching(struct node *head)
{
    int x;
    printf("Enter what you want to search in linked list : ");
    scanf("%d", &x);
    head = head->next;
    while (head != NULL)
    {
        if (head->data == x)
        {
            printf("FOUND\n");
            exit(0);
        }
        head = head->next;
    }
    printf("NOT FOUND\n");
}
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sortLinkedList(struct node* head) {
    if (head == NULL || head->next == NULL) 
        return;

    int swapped;
    struct node* ptr1;
    struct node* lptr = NULL;

    do {
        swapped = 0;                        
        ptr1 = head->next;

        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                swap(&ptr1->data, &ptr1->next->data);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
        printf("After swapping: ");
        print(head);
    } while (swapped);
}

void deletefrombeginning(struct node *head)
{
    if (head->next == NULL)
    {
        printf("List is empty. No node to delete.\n");
        return;
    }
    struct node *temp = head->next;
    head->next = temp->next;
    free(temp);
}

void deletefromanyindex(struct node* head)
{
    struct node* current=head->next;
    struct node* prev=head;
    int index,indx;
    printf("Enter index which you want to delete a node from the list : ");scanf("%d",&index);
    indx=index;
    while(--index)
    {
        prev=current;
        current=current->next;
        if(current==NULL && index>0)
        {
            printf("There is no index %d in the list.\n", indx);
            return;
        }
    }
    prev->next=current->next;
    free(current);
}

void deletefromending(struct node *head)
{
    if (head->next == NULL)
    {
        printf("List is empty. No node to delete.\n");
        return;
    }
    struct node *prev = head;
    struct node *current = head->next;
    while (current->next != NULL)
    {
        prev = current;
        current = current->next;
    }
    prev->next = NULL;
    free(current);
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    if (head != NULL)
    {
        head->next = NULL;
        int n;
        printf("Enter list size : ");
        scanf("%d", &n);
        while(n--)
        {
            int choice;printf("Enter 1 for add node or 2 for delete node or 3 for print the list or 4 for sort the list or 5 for searching or 6 for break : ");
            scanf("%d",&choice);
            if(choice==1)
            {
                int add;printf("Enter 1 for inset at begining or 2 for middle or 3 for last : ");
                scanf("%d",&add);
                switch(add)
                {
                    case 1:
                        insertatbeginning(head);
                        break;
                    case 2:
                        insertatmiddle(head);
                        break;
                    case 3:
                        insertatending(head);
                        break;
                }
            }
            else if(choice==2)
            {
                if(head->next==NULL)printf("The list is empty at this moment.");
                else
                {
                    int delete;
                    printf("Enter 1 for delete at begining or 2 for middle or 3 for last : ");
                    scanf("%d", &delete);
                    switch (delete)
                    {
                    case 1:
                        deletefrombeginning(head);
                        break;
                    case 2:
                        deletefromanyindex(head);
                        break;
                    case 3:
                        deletefromending(head);
                        break;
                    }
                }
            }
            else if(choice==3)
            {
                print(head);
            }
            else if(choice==4)
            {
                sortLinkedList(head);
            }
            else if(choice==6)
            {
                searching(head);
            }
            else
            {
                break;
            }
        }
        printf("\n\n\n");
        print(head);
    }
    return 0;
}
