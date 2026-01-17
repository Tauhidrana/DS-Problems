#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x;
        cin >> n >> x;
        int div = n / 10;
        int ans = div * x;
        cout << ans << endl;
    }

    return 0;
}