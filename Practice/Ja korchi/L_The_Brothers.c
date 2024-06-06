#include<stdio.h>
#include<string.h>
int main()

{
    char a[100], b[100];
    scanf("%s %s", a, b);
    char c[100], d[100];
    scanf("%s %s", c, d);
    int d1 = strcmp(b, d);
    if(d1 == 0)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }
    

    return 0;
}