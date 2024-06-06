#include<bits/stdc++.h>
using namespace std;
int main()

{

    int t;
    cin >> t;
    while(t--)
    {
        char mat[3][3];
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cin >> mat[i][j];
            }
        }
        // for(int i = 0; i < 3; i++)
        // {
        //     for(int j = 0; j < 3; j++)
        //     {
        //         cout << mat[i][j];
        //     }
        //     cout << endl;
        // }
        if(mat[0][0] == 'X' && mat[0][1] == 'X' && mat[0][2] == 'X'
        ||mat[1][0] == 'X' && mat[1][1] == 'X' && mat[1][2] == 'X'
         || mat[2][0] == 'X' && mat[2][1] == 'X' && mat[2][2] == 'X')
         {
            cout << 'X' << endl;
         }
        else if(mat[0][0] == 'X' && mat[1][0] == 'X' && mat[2][0] == 'X'
        ||mat[0][1] == 'X' && mat[1][1] == 'X' && mat[2][1] == 'X'
         || mat[0][2] == 'X' && mat[1][2] == 'X' && mat[2][2] == 'X')
         {
            cout << 'X' << endl;
         }
        else if(mat[0][0] == 'X' && mat[1][1] == 'X' && mat[2][2] == 'X' 
        || mat[0][2] == 'X' && mat[1][1] == 'X' && mat[2][0] == 'X')
        {
            cout << 'X' << endl;
        }

        else if(mat[0][0] == '+' && mat[0][1] == '+' && mat[0][2] == '+'
        ||mat[1][0] == '+' && mat[1][1] == '+' && mat[1][2] == '+'
         || mat[2][0] == '+' && mat[2][1] == '+' && mat[2][2] == '+')
         {
            cout << '+' << endl;
         }
        else if(mat[0][0] == '+' && mat[1][0] == '+' && mat[2][0] == '+'
        ||mat[0][1] == '+' && mat[1][1] == '+' && mat[2][1] == '+'
         || mat[0][2] == '+' && mat[1][2] == '+' && mat[2][2] == '+')
        {
            cout << '+' << endl;
        }
        else if(mat[0][0] == '+' && mat[1][1] == '+' && mat[2][2] == '+' 
        || mat[0][2] == '+' && mat[1][1] == '+' && mat[2][0] == '+')
        {
            cout << '+' << endl;
        }

        else if(mat[0][0] == 'O' && mat[0][1] == 'O' && mat[0][2] == 'O'
        ||mat[1][0] == 'O' && mat[1][1] == 'O' && mat[1][2] == 'O'
         || mat[2][0] == 'O' && mat[2][1] == 'O' && mat[2][2] == 'O')
         {
            cout << 'O' << endl;
         }
        else if(mat[0][0] == 'O' && mat[1][0] == 'O' && mat[2][0] == 'O'
        ||mat[0][1] == 'O' && mat[1][1] == 'O' && mat[2][1] == 'O'
         || mat[0][2] == 'O' && mat[1][2] == 'O' && mat[2][2] == 'O')
        {
            cout << 'O' << endl;
        }
        else if(mat[0][0] == 'O' && mat[1][1] == 'O' && mat[2][2] == 'O' 
        || mat[0][2] == 'O' && mat[1][1] == 'O' && mat[2][0] == 'O')
        {
            cout << 'O' << endl;
        }
        else
        {
            cout << "DRAW"  << endl;
        }
    }

    return 0;
}