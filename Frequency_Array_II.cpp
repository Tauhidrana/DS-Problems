#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int fre[6] = {0};
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            fre[0]++;
        }
        else if (a[i] == 1)
        {
            fre[1]++;
        }
        else if (a[i] == 2)
        {
            fre[2]++;
        }
        else if (a[i] == 3)
        {
            fre[3]++;
        }
        else if (a[i] == 4)
        {
            fre[4]++;
        }
        else if (a[i] == 5)
        {
            fre[5]++;
        }
    }
    cout << 0 << " " << "->" << " " << fre[0] << endl;
    cout << 1 << " " << "->" << " " << fre[1] << endl;
    cout << 2 << " " << "->" << " " << fre[2] << endl;
    cout << 3 << " " << "->" << " " << fre[3] << endl;
    cout << 4 << " " << "->" << " " << fre[4] << endl;
    cout << 5 << " " << "->" << " " << fre[5] << endl;
    return 0;
}