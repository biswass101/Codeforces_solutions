#include<stdio.h>

int main(){
    long long int seat;
    scanf("%lld",&seat);
    long long int row=0,column=0;
    row=seat/4;
    column=seat%4;
    if(row%2!=0){
        column=3-column;
        printf("%lld %lld",row,column);
    }
    else{
        printf("%lld %lld",row,column);
    }
    return 0;
}