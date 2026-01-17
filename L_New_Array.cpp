#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        c[i] = b[i] && a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << endl;
    }

    return 0;
}