#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char s[1005];
        scanf("%s", s);

        int freq[26] = {0};
        int n = strlen(s);

        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }

        int odd = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] % 2 != 0)
            {
                odd++;
            }
        }

        int ans = 0;
        if (odd > 1)
            ans = odd - 1;

        printf("%d\n", ans);
    }

    return 0;
}
