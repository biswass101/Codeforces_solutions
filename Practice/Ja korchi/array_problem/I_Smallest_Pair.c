#include<stdio.h>
#include<limits.h>
int main()

{
    //Ai + Aj + j - i(miminum)
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int sum_pair = INT_MAX;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int x = arr[i] + arr[j] + j - i;
                if(sum_pair > x)
                {
                    sum_pair = x;
                }
            }
        }
        printf("%d\n", sum_pair);
    }

    return 0;
}