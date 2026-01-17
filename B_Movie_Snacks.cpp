#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    int a = 2*X + 3*Y;     
    int b = Z + X + 2*Y;   
    int c = 2*Z + Y;        

    cout << min({a, b, c}) << "\n";
    return 0;
}
