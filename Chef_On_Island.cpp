#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, xr, yr, d;
        cin >> x >> y >> xr >> yr >> d;
        int food_days = x / xr;
        int water_days = y / yr;
        int S_days = min(food_days, water_days);
        if (S_days >= d)
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