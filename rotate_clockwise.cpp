
#include<iostream>
using namespace std;
#define N 3  // used to define constant or micro substitution. 
void rotate90Clockwise(int arr[N][N])
{
    for (int j = 0; j < N; j++)
    {
        for (int i = N - 1; i >= 0; i--)
            cout << arr[i][j] << " ";
        cout << '\n';
    }
}
int main()
{
    int arr[N][N] = { { 11, 22, 33 },
                      { 44, 55, 66 },
                      { 77, 88, 99 } };
    rotate90Clockwise(arr);
    return 0;
}
