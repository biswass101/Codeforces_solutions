#include<stdio.h>

int main()

{

    int a, b;
    int c = -1;
    scanf("%d %d", &a, &b);
    for(int i = a; i <=b ; i++)
    {
        int lucky = 0; 
        int x = i;
        while(x)
        {
            if(x % 10 != 4 && x % 10 != 7) 
            {
                lucky++;
                
            }
            x/=10;
        }
        if(lucky == 0)
        {
            printf("%d ", i);
            
            c++;
        }
        
    }
    if(c == -1)
    {
        printf("%d\n", -1);
    }
    return 0;
}