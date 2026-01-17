#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        int n = s.size();

        int sum_first3 = 0;
        int sum_last3 = 0;

        for (int i = 0; i < 3; i++)
        {
            sum_first3 += s[i] ;
        }

        for (int i = n - 3; i < n; i++)
        {
            sum_last3 += s[i] ;
        }

        if (sum_first3 == sum_last3)
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
