#include<stdio.h>

int main()

{ 
    //Not solved

    int a, b;
    scanf("%d %d\n", &a, &b);
    printf("%d %d\n", a, b);
    int arr[7];
    for(int i = 0; i < 7; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for(int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }

    /*printf("\n");
    int flag = 1;
    if(arr[a] == '-')
    {
        for(int i = 0; i < a + b + 1; i++)
        {
            if(i == a)
            {
                continue;
            }
            if(arr[i] >= 0 && arr[i] <= 9)
            {
                continue;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    else
    {
        flag = 0;
    }
    if(flag == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }*/
    return 0;
}