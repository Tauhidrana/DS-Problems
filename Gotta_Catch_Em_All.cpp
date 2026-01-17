#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, x, y;
        cin >> n >> x >> y;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long cost = 0;

        for (int i = 0; i < n; i++)
        {
            long long normal = 1LL * x * a[i];
            long long master = y;
            cost += min(normal, master);
        }

        cout << cost << "\n";
    }

    return 0;
}
