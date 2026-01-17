#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int flag = 1;

    auto left = s.begin();         
    auto right = s.end() - 1;       

    while (left < right)
    {
        if (*left != *right)       
        {
            flag = 0;
            break;
        }
        left++;                    
        right--;
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
