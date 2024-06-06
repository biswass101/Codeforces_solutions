#include<stdio.h>
#include<math.h>
void is_prime(int n)
{
    int flag =  0;
        for(int i = 2; i <=n/2; i++)
        {
            if(n % i == 0)
            {
                flag = 1;
            }

        }

        if(flag == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
}
int main()

{

    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int n;
        scanf("%lld", &n);
        is_prime(n);
    }
    

    return 0;
}