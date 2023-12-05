#include <stdio.h>
int func(int n, int *z)
{
    int unsigned i;
    for (i = n; i > 0;)
        *z++;
        printf("%d\n", *z);
        if (i + 1 == n)
        {
           printf("YES");
        }
        if (i == 0)
        {
           printf("impossible");
        }
        --i;
}
int main()
{
    int x, z = 0;
    scanf("%d", &x);
    func(x, &z);
}
