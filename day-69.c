#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int nums[n];
    int count[100] = {0};

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(int i = 0; i < n; i++)
    {
        count[nums[i]]++;

        if(count[nums[i]] == 2)
        {
            printf("%d", nums[i]);
            break;
        }
    }

    return 0;
}