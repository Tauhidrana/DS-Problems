#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jersey_no;
    char country[100];
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    Cricketer *kohli = new Cricketer;
    cin >> dhoni->jersey_no;
    cin.ignore();
    cin.getline(dhoni->country, 100);

    kohli->jersey_no = dhoni->jersey_no;
    strcpy(kohli->country, dhoni->country);
    // *kohli = *dhoni;   !!right way!!
    // kohli = dhoni !!wrong way!!
   
    delete dhoni;
    cout << kohli->jersey_no << " " <<kohli->country;
   

    return 0;
}