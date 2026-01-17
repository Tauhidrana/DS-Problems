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

        int choc = n / 5;
        int wrap = choc;

        while (wrap >= 3)
        {
            int extra = wrap / 3;
            choc += extra;
            wrap = extra + (wrap % 3);
        }

        cout << choc << endl;
    }

    return 0;
}
