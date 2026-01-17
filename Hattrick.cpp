#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        char balls[6];
        for (int i = 0; i < 6; i++)
        {
            cin >> balls[i];
        }

        bool hat = false;
        for (int i = 0; i < 6; i++)
        {
            if (balls[i] == 'W' && balls[i + 1] == 'W' && balls[i + 2] == 'W')
            {
                hat = true;
            }
        }
        if (hat == true)
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