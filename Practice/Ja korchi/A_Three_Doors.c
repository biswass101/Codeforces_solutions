#include<stdio.h>

int main()

{
    int t;
    scanf("%d", &t);
    while(t--)
    {   
        int key;
        scanf("%d", &key);
        
        int arr[3];
        for(int i = 0; i < 3; i++)
        {
            scanf("%d", &arr[i]);
        }
        
        if(arr[key-1] != 0)
        {
            key = arr[key-1];
            
            if(arr[key-1] != 0)
            {
                key = arr[key-1];
                ;
                {
                    if(arr[key-1] == 0)
                    {
                        printf("YES\n");
                    }
                    else
                    {
                        printf("NO\n");
                    }
                }
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}