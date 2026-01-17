#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        int a, b, c;
        cin >> a >> b >> c;

       
        int mx = max(a, max(b, c));
        int mn = min(a, min(b, c));
        int mid = a + b + c - mx - mn;

        cout << mid << endl;
    }
    return 0;
}
