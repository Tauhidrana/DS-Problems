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
        int val = a[i];
        fre[val]++;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << i << " " << "->" << " " << fre[i] << endl;
    }

    return 0;
}