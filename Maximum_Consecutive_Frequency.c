#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[100005];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max_num = a[0];
    int max_freq = 1;

    int curr_num = a[0];
    int curr_freq = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == curr_num)
        {
            curr_freq++;
        }
        else
        {

            if (curr_freq > max_freq)
            {
                max_freq = curr_freq;
                max_num = curr_num;
            }

            curr_num = a[i];
            curr_freq = 1;
        }
    }

    if (curr_freq > max_freq)
    {
        max_freq = curr_freq;
        max_num = curr_num;
    }

    printf("%d %d\n", max_num, max_freq);

    return 0;
}
