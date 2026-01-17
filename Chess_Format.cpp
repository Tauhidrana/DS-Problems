#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int ans = a + b;
        if (ans < 3)
        {
            cout << "1" << endl;
            
        }
        else if (ans >= 3 && ans >= 10)
        {
            cout << "2" << endl;
        }
        else if (ans >= 11 && ans >= 60)
        {
            cout << "3" << endl;
        }
        else 
        {
            cout << "4" << endl;
        }
    }

    return 0;
}