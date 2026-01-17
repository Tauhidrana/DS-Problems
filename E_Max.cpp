#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    cin >> x;
    int a[x];
    for (int i = 0; i < x; i++)
    {
        cin>>a[i];
    }
    int mx = INT_MIN;
    for (int i = 0; i < x; i++)
    {
        mx = max({a[i], mx});
    }

    cout << mx << endl;
    return 0;
}