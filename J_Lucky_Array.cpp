#include <bits/stdc++.h>
using namespace std;
int main()
{

 int n;
 cin>>n;
 int a[n];
 for (int i = 0; i < n; i++)
 {
    cin>>a[i];
 }
 
    int min_val = a[0];

    for (int i = 0; i < n; i++)
    {

        if (a[i] < min_val)
        {
            min_val = a[i];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == min_val)
        {
            cnt++;
        }
    }
 if(cnt%2!=0)
 {
    cout<<"Lucky"<<endl;
 }
 else
 {
    cout<<"Unlucky"<<endl;
 }
  
    return 0;
}