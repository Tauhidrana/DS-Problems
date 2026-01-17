#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int needed_screen = y / 2;
        int baki = needed_screen * 7;
        if (y % 2 != 0)
        {
            needed_screen++;
            baki += 11;
        }
        if (x > baki)
        {
            x -= baki;
            needed_screen += x / 15;
            if (x % 15 != 0)

                needed_screen++;
        }

        cout << needed_screen << endl;
    }
    return 0;
}