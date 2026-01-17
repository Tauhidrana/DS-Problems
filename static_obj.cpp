#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section[100];
    int math_marks;
    int cls;
    Student( char *n, int r,  char *s, int m_m, int c)
    {
        strcpy(name, n);

        roll = r;
        strcpy(section, s);
        math_marks = m_m;
        cls = c;
    }
};
int main()
{
    Student rakib("Rakib", 2, "A", 100, 10);
    Student akib("Akib", 5, "A", 80, 10);
    Student sakib("Sakib", 7, "A", 89, 10);
  if (rakib.math_marks > akib.math_marks &&  sakib.math_marks)
{
    cout << rakib.name;
}
else if (akib.math_marks > rakib.math_marks &&  sakib.math_marks)
{
    cout << akib.name;
}
else
{
    cout << sakib.name;
}


    return 0;
}