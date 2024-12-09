#include <stdio.h>
int main()
{
    printf("please enter n and m\n");
    int n, m;
    scanf("%d%d", &m, &n);
    int arr[m][n], r, c, f = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                f = 1;
                r = i, c = j;
                break;
            }
        }
    }
    if (f == 1)
    {
        printf("zero exist in %d%d index \n", r, c);
        for (int i = 0; i < m; i++)
        {
            arr[i][c] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            arr[r][i] = 0;
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("zero does not exist\n");
    }

    return 0;
}
