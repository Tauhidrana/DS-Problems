#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, X, Y;
        long long int max_earnings;
        cin >> N >> X >> Y;
        if (Y > 2 * X)
        {
            max_earnings = (N / 2) * Y + (N % 2) * X;
        }
        else
        {
            max_earnings = N * X;
        }
        
        cout << max_earnings << endl;
    }
    return 0;
}   
