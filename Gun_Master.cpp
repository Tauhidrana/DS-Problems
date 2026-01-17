#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, d;
        cin >> n >> d;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        char gun = 'c';
        for (int i = 0; i < n; i++)
        {
            if (a[i] > d && gun == 'c')
            {
                gun = 'l';
                count++;
            }
            else if (a[i] <= d && gun == 'l')
            {
                gun = 'c';
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}