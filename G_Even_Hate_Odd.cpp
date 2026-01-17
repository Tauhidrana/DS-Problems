#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n % 2 != 0)
        {
            cout << "-1" << endl;
            continue;
        }

        int div = n / 2;
        int odd = 0;
        int even = 0;
        for (int i = 0; i < n; i++)
        {

            if (n % 2 == 0)
            {

                if (a[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
        }
        int ans = abs(div - even);
        cout << ans << endl;
    }

    return 0;
}