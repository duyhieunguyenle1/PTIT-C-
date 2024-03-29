// Step 1: 
// 0 1 1 0  maximum area  = 2
// Step 2:
// row 1  1 2 2 1  area = 4, maximum area becomes 4
// row 2  2 3 3 2  area = 8, maximum area becomes 8
// row 3  3 4 0 0  area = 6, maximum area remains 8

// Find the maximum rectangular area under the histogram, consider 
// the ith row as heights of bars of a histogram. This can be 
// calculated as given in this article "Largest Rectangular Area in a Histogram"
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int R, C;
int mat[20][20];
int maxArea(int mat[][20], int R, int C)
{
    int hist[R + 1][C + 1];
    for (int i = 0; i < C; i++)
    {
        hist[0][i] = mat[0][i];
        for (int j = 1; j < R; j++)
            hist[j][i] = (mat[j][i] == 0) ? 0 : hist[j - 1][i] + 1;
    }
    for (int i = 0; i < R; i++)
    {
        int count[R + 1] = {0};
        for (int j = 0; j < C; j++)
            count[hist[i][j]]++;
        int col_no = 0;
        for (int j = R; j >= 0; j--)
        {
            if (count[j] > 0)
            {
                for (int k = 0; k < count[j]; k++)
                {
                    hist[i][col_no] = j;
                    col_no++;
                }
            }
        }
    }
    int curr_area, max_area = 0;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            curr_area = (j + 1) * hist[i][j];
            if (curr_area > max_area)
                max_area = curr_area;
        }
    }
    return max_area;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> R >> C;
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin >> mat[i][j];
            }
        }
        cout << maxArea(mat, R, C) << endl;
    }
    return 0;
}