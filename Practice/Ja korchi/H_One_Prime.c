#include<stdio.h>
#include<math.h>

int main()

{

    int x;
    int count = 0;
    scanf("%d", &x);
    for(int i = 2; i <= sqrt(x); i++)
    {
        if(x % i == 0)
        {
            count++;
        }
    }

    if(count == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}