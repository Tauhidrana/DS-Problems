#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int N, X;
        cin >> N >> X;

        int evenCnt = N / 2;
        int oddCnt = N - evenCnt;

        if (X % 2 == 0)
        {
            cout << evenCnt - 1 << "\n";
        }
        else
        {
            cout << oddCnt - 1 << "\n";
        }
    }
    return 0;
}
