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
    int cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cnt0++;
        }
        else if (a[i] == 1)
        {
            cnt1++;
        }
        else if (a[i] == 2)
        {
            cnt2++;
        }
        else if (a[i] == 3)
        {
            cnt3++;
        }
        else if (a[i] == 4)
        {
            cnt4++;
        }
        else if (a[i] == 5)
        {
            cnt5++;
        }
    }
    cout << 0 << " " << "->" << " " << cnt0 << endl;
    cout << 1 << " " << "->" << " " << cnt1 << endl;
    cout << 2 << " " << "->" << " " << cnt2 << endl;
    cout << 3 << " " << "->" << " " << cnt3 << endl;
    cout << 4 << " " << "->" << " " << cnt4 << endl;
    cout << 5 << " " << "->" << " " << cnt5 << endl;
    return 0;
}