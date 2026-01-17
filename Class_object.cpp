#include <bits/stdc++.h>
using namespace std;
class Student{
public:

char name[100];
int age;
int roll;

};
int main()
{
int t;
cin>>t;
cin.ignore();
for (int i = 0; i < t; i++)
{
    Student a;
     
    cin.getline(a.name, 100);
    cin >> a.age >> a.roll;
    cin.ignore();
    
    cout<<a.name<<" "<<a.age<<" "<<a.roll<<endl;
}

  
    return 0;
}