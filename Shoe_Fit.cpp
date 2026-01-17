#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a && b > 0)
        {
            cout << "1" << endl;
        }
        else if (a && c > 0)
        {
            cout << "1" << endl;
        }
        else if (b && c > 0)
        {
            cout << "1" << endl;
        }

        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}