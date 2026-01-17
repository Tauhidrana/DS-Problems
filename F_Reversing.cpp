#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x;
    cin >> x;
    vector<int> a(x);
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }

    for (int i = x - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}