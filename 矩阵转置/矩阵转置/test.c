#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int m = 0;
    int n = 0;
    int arr[10][10] = { 0 };
    scanf("%d %d", &m, &n);
    int i = 0;
    int j = 0;
    for (i = 0;i < m;i++)
    {
        for (j = 0;j < n;j++)
        {
            scanf("%d", &arr[i][j]);
        }

    }
    for (i = 0;i < n;i++)
    {
        for (j = 0;j < m;j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}

