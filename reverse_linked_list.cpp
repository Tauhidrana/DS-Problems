#include <bits/stdc++.h>
using namespace std;
int main()
{

      list<int> l;
    int x;
    while (cin >> x)
    {
        l.push_back(x);
    }
    l.reverse();
    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}