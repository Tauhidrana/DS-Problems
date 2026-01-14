#include <bits/stdc++.h>
using namespace std;
void reverseQueue(queue<int> &q)
{
    stack<int> st;

    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
}
int main()
{

    queue<int> q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    reverseQueue(q);

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}