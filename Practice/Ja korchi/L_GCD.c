#include<stdio.h>

int main()

{

    int a, b;
    int gcd = 0;
    
    scanf("%d %d", &a, &b);
    
    
        while(1)
        {
            int rem = b % a;
            gcd = a;
            b = a;
            a = rem;
            if(rem == 0)
            {
                break;
            }
        }
    

    printf("%d", gcd);


    return 0;
}