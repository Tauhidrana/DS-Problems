#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, h, x;
    cin >> n >> h >> x;
    bool ans = false;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (x + t >= h)
        {
            ans = true;
        }
    }
    if (ans == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}