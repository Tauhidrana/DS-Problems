#include <bits/stdc++.h>

using namespace std;

int main() {
    int bill, vou;
    cin >> bill >> vou;
    int pay = bill - vou;
    if(bill>vou)
    {
        cout<<pay<<endl;
        
    }
    else
    {
        cout<<"0"<<endl;
    }
}