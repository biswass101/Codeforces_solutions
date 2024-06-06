#include<stdio.h>

int main()

{

    int n; //123
    scanf("%d", &n);
    int w = n;
    int nn = 0;
    while(1)
    {
        if(w == 0)
        {
            break;
        }
        int rem = w % 10;
        nn = nn * 10 + rem;
        w = w / 10;
    }
    printf("%d\n", nn);
    if(nn == n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}