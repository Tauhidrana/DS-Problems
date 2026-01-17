#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    string sec;
    int mark;
};

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        {
            Student a, b, c;
            cin >> a.id >> a.name >> a.sec >> a.mark;
            cin >> b.id >> b.name >> b.sec >> b.mark;
            cin >> c.id >> c.name >> c.sec >> c.mark;

            Student flag = a;

            if (b.mark > flag.mark || (b.mark == flag.mark && b.id < flag.id))
                flag = b;

            if (c.mark > flag.mark || (c.mark == flag.mark && c.id < flag.id))
                flag = c;

            cout << flag.id << " " << flag.name << " " << flag.sec << " " << flag.mark << endl;
        }
    }

    return 0;
}
