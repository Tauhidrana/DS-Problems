#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int mi = min({a, b, c});
    int mx = max({a, b, c});
    cout << mi << " " << mx << endl;
    return 0;
}