#include <bits/stdc++.h>
using namespace std;
int main()
{

    int *x = new int[3];
    int *y = new int[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> x[i];
        y[i] = x[i];
    }
    int y[5];
    y[3] = 2;
    y[4] = 3;
    delete[] x;
    for (int i = 0; i < 5; i++)
    {
        cout << y[i] << " " << endl;
    }

    return 0;
}