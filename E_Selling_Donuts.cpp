#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)

            cin >> a[i];

        int ans = 0;

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;

            if (a[x] > 0)

                a[x]--;

            else

                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
