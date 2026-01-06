#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l, l2;

    int x,y;
    while (cin >> x,y)
    {
        l.push_back(x);
    }

    if (l == l2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}