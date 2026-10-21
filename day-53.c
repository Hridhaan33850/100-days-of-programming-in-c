#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int pivot = -1;

    for (int i = 0; i < n; i++)
    {
        int leftsum = 0;
        int rightsum = 0;

        for (int j = 0; j < i; j++)
        {
            leftsum = leftsum + a[j];
        }

        for (int j = i + 1; j < n; j++)
        {
            rightsum = rightsum + a[j];
        }

        if (leftsum == rightsum)
        {
            pivot = i;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}