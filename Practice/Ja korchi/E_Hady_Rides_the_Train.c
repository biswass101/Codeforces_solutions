#include<stdio.h>

int main()

{

    long long int n;
    scanf("%lld", &n);
    if(n == 0)
    {
        printf("%d %d", 0, 0);
    }
    else
    {
        long long int row = n / 4;
        if(row % 2 == 0)
        {
            long long int starting_point_row = row * 4;
            if(starting_point_row == n)
            {
                printf("%lld %d\n", row, 0);
            }
            else
            {
                long long int dist_from_st_point = n - starting_point_row;
                printf("%lld %lld\n", row, dist_from_st_point);
            }
        }
        else
        {
            long long int starting_point_row = (row * 4) + 3;
            if(starting_point_row == n)
            {
                printf("%lld %d\n", row, 0);
            }
            else
            {
                long long int dist_from_st_point = starting_point_row - n;
                printf("%lld %lld\n", row, dist_from_st_point);
            }
        }
    }
    return 0;
}