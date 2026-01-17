#include <bits/stdc++.h>
using namespace std;
int main()
{

    char a[100000];
    while (cin.getline(a, 100000))
    {
        int len = strlen(a);

        sort(a, a + len);

        for (int i = 0; i < len; i++)
        {
            if (a[i] != ' ')
            {
                cout << a[i];
            }
        }
        cout << endl;
    }


return 0;
}