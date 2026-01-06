#include <bits/stdc++.h>
using namespace std;

 bool flag = true;
void is_Palindrome(list<int> l)
{
   

    while (l.size() > 1)
    {
        if (l.front() != l.back())
        {
            flag = false;
            break;
        }
        l.pop_front();
        l.pop_back();
    }
}
int main()
{
    list<int> l;
    int x;
    while (cin >> x)
    {
        l.push_back(x);
    }

    is_Palindrome(l);
      if (flag==true)
        cout << "YES"<<" ";
    else
        cout << "NO"<<" ";
}
