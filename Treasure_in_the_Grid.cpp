#include <bits/stdc++.h>
using namespace std;

long long grid[105][105];
long long pre[105][105];

int main()
{

    int N, M, Q;
    cin >> N >> M >> Q;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {

            long long up = (i > 0) ? pre[i - 1][j] : 0;
            long long left = (j > 0) ? pre[i][j - 1] : 0;
            long long diag = (i > 0 && j > 0) ? pre[i - 1][j - 1] : 0;

            pre[i][j] = grid[i][j] + up + left - diag;
        }
    }

    while (Q--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        long long total = pre[x2][y2];

        if (y1 > 0)
        {
            total -= pre[x2][y1 - 1];
        }
        if (x1 > 0)
        {
            total -= pre[x1 - 1][y2];
        }
        if (x1 > 0 && y1 > 0)
        {
            total += pre[x1 - 1][y1 - 1];
        }

        cout << total << "\n";
    }

    return 0;
}
