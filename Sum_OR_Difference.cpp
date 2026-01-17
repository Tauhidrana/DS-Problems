#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n1, n2;
    cin >> n1 >> n2;
    int sum = n1 + n2;
    int dif = n1 - n2;
    if (n1 > n2)
    {
        cout << dif << endl;
    }
    else
    {
        cout << sum << endl;
    }

    return 0;
}