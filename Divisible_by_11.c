#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[1050];
    scanf("%s", s);

    int n = strlen(s);

    int odd = 0;
    int even = 0;

    int pos = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        int d = s[i] - '0';

        if (pos % 2 == 1)
            odd += d;
        else
            even += d;

        pos++;
    }

    int diff = abs(odd - even);

    if (diff % 11 == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
