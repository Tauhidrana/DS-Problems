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
        if (n > 65)
        {
            cout << "Overload" << endl;
        }
        else if (n < 35)
        {
            cout << "Underload" << endl;
        }
        else
        {
            cout << "Normal" << endl;
        }
    }
}