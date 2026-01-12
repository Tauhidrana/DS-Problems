#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> st, st1;
    int n, m;

    cin >> n;
    for (int i = 0; i < n && m; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        st1.push(y);
    }

    if (st == st1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}