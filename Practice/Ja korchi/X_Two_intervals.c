#include<stdio.h>

int main()

{

    int a1, b1, a2, b2; //2
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
    if(a2 > a1 && b2 < b1)
    {
        printf("%d %d\n", a2, b2);
    }
    else if(a2 < a1 && b2 > b1)
    {
        printf("%d %d", a1, b1);
    }
    else
    {
        printf("-1\n");
    }
    return 0;
}