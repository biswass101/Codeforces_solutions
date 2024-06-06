#include<bits/stdc++.h>
using namespace std;
int main()

{

    /*
    
     1 = 0
     2 = 1
     3 = 1
     4 = 2
     5 = 3
     6 = 5
     7 = 8
     8 = 13

    
    */

    int first = -1;
    int second = 1;
    int fibo = 0;
    for(int i = 1; i <= 1; i++)
    {
        fibo = first + second;
        first = second;
        second = fibo;
       
    }
    cout << fibo << endl;
    return 0;
}