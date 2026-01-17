#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x;
        cin >> n >> x;
        float off = n * 0.10;
        
        float on = n - off;
      
        if (on < x)
        {
            cout << "ONLINE" << endl;
        }
        else if (x == on)
        {
            cout << "EITHER" << endl;
        }
        else
        {
            cout << "DINING" << endl;
        }
    }

    return 0;
}