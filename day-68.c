#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    int nums[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        sum = sum + nums[i];
    }

    int total = n * (n + 1) / 2;

    printf("%d", total - sum);

    return 0;
}