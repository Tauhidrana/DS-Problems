#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_mark;
    int eng_mark;

    int total_marks()
    {
        return math_mark + eng_mark;
    }
};

bool cmp(Student l, Student r)
{
    if (l.total_marks() == r.total_marks())
    {
        return l.id < r.id;
    }
    else
    {
        return l.total_marks() > r.total_marks();
    }
}

int main()
{
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_mark >> a[i].eng_mark;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_mark << " " << a[i].eng_mark << endl;
    }

    return 0;
}
