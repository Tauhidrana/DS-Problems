#include <bits/stdc++.h>
using namespace std;

int main() {
    char a[101];
    cin >> a;

    int len = strlen(a);

    
    for (int i = 0; i < len; i++) {
        a[i] = tolower(a[i]);
    }

   
    for (int i = len - 1; i >= 0; i--) {
        cout << a[i];
    }

    return 0;
}
