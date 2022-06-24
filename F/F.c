#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d %d", &n, &k);

    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        if (num * 2 < num + k)
        {
            num = num * 2;
        }
        else
        {
            num = num + k;
        }
    }
    printf("%d\n", num);
    return 0;
}
