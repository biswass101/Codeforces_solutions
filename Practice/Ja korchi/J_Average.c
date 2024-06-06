#include<stdio.h>
//Not solved
int main()

{

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    float avg;
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    avg = sum / n;
    printf("%f\n", avg);
    return 0;
}