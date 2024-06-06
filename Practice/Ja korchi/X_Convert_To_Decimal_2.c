#include<stdio.h>
#include<math.h>

int main()

{
   int t;
   scanf("%d", &t);
   while(t--)
   {
       long long int n;
       scanf("%lld", &n);
       long long int b_s = 0;
       int count = 0;
       while(n)
       {
           int rem = n % 2;
           if(rem == 1)
           {
             b_s = b_s * 10 + rem;
             count++;
             
           }
           n = n / 2;
           
       }
       
       //printf("%d %d\n", b_s, count);
       long long int x_sum = 0;
       for(int i = 0; i < count; i++)
        {
           
               int rem = b_s % 10;
               x_sum = x_sum +(rem * pow(2, i));
               b_s = b_s / 10; 
        
        }
        
        printf("%lld\n", x_sum);
   }

   


    return 0;
}