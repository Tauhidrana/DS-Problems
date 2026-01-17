#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int t1 = abs(a - 1);
        int t2 = abs(b - c) + abs(c - 1);
        if (t1 > t2)
        {
            cout << "2" << endl;
        }
        else if (t1 < t2)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }

    return 0;
}