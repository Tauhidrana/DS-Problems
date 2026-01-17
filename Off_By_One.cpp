#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;
    string c = "1";
    string ans = to_string(a+b);
    ans.append(c);
    cout<<ans<<endl;


    return 0;
}