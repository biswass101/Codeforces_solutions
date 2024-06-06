#include<bits/stdc++.h>
using namespace std;
void swapAndPrint(int n, int x, int y)
{
    x--;
    y--;
    int mat[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        swap(mat[x][i], mat[y][i]);
        
    }
    for(int i = 0; i < n; i++)
    {
        swap(mat[i][x], mat[i][y]);
        
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    int n, x, y;
    cin >> n >> x >> y;
    swapAndPrint(n, x, y);

    return 0;
}