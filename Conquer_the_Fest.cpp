#include <bits/stdc++.h>
using namespace std;
int main()
{

    int N, B;
    cin >> N >> B;
    int level = 10 * B;
    if (level <= N)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}