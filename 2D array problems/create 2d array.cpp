#include<iostream>
using namespace std;

int main()
{
    int m = 2, n = 3;
    int mat[m][n];
    for(int i = 0 ;i < m ;i++)
    {
        for(int j = 0 ;j < n ;j++)
        {
            cin>>mat[i][j];
        }
    }
    for (int i = 0; i < m; i++)
       for (int j = 0; j < n; j++)

          // Prints ' ' if j != n-1 else prints '\n'
          cout << mat[i][j] << " \n"[j == n-1];

    return 0;
}
