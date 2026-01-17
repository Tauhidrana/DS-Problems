#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int r, g, b;
        cin >> r >> g >> b;
        int mx = max({r, g, b});
        int total = r + g + b;
        if (mx <= total - mx)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}