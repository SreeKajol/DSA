#include <stdio.h>
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *list, *tptr, *nptr;
    int n;
    scanf("%d", &n);
    list = NULL;
    for (int i = 1; i <= n; i++)
    {
        nptr = (struct node *)malloc(sizeof(struct node));
        nptr->next = NULL;
        scanf("%d", &nptr->data);
        if (list == NULL)
        {
            list = nptr;
            tptr = nptr;
        }
        else
        {
            tptr->next = nptr;
            tptr = nptr;
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
