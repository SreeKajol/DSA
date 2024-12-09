#include <stdio.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
        struct node *pre;
    };
    struct node *nptr, *tptr, *list;
    list = NULL;
    printf("please enter n:");
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        nptr = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &nptr->data);
        nptr->next = NULL;
        nptr->pre = NULL;
        if (list == NULL)
        {
            list = nptr;
            tptr = nptr;
        }
        else
        {
            tptr->next = nptr;
            nptr->pre = tptr;
            tptr = tptr->next; // tptr=nptr;
        }
    }
    tptr = list;
    while (tptr != NULL)
    {
        printf("%d ", tptr->data);
        tptr = tptr->next;
    }

    return 0;
}
