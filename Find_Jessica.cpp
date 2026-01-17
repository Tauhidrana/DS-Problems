#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool ans = false;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            ans = true;
            break;
        }
    }

    if (ans == true)
    {
        cout <<"YES";
    }
    else
    {
        cout <<"NO";
    }

    return 0;
}
