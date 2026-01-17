#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        int ans = x - y;
        if (x > y)
        {
            cout << ans << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}