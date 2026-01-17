#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;
        int idx = 0;
        while ((idx = s.find(x, idx)) != string::npos)
        {
            s.replace(idx, x.size(), "#");
            idx += 1;
        }
        cout << s << endl;
    }
    return 0;
}
