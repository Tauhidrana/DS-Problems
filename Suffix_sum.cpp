#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> ss(n);
    ss[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        ss[i] = ss[i + 1] + v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << ss[i] << " ";
    }

    return 0;
}