#include <bits/stdc++.h>
using namespace std;
int main()
{

 int t;
 cin>>t;
 for (int i = 0; i < t; i++)
 {
    int a,b,c;
    cin>>a>>b>>c;
    int ans = a+b;
    if (ans == c)
    {
       cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
 }
  
    return 0;
}