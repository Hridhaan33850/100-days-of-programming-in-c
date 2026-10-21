#include <stdio.h>

int main()
{
    int n, x;
    int leftsum, rightsum;
    int pivot = -1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        leftsum = 0;
        rightsum = 0;

        for (int i = 1; i <= x; i++)
        {
            leftsum = leftsum + i;
        }

        for (int i = x; i <= n; i++)
        {
            rightsum = rightsum + i;
        }

        if (leftsum == rightsum)
        {
            pivot = x;
            break;
        }
    }

    printf("%d", pivot);

    return 0;
}