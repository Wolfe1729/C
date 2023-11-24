#include <stdio.h>
int func(int n)
{
    int m = n - 1;
    while (1)
    {
        if (m == 1)
            printf("No luck");
        break;
        int a = (m * m) + 1;
        int a_1 = (m * m) - 1;
        int b = 2 * m;
        if (a + b + a_1 == n)
        {
            printf("%d %d %d", a, a_1, b);
        }
        m = m - 1;
    }
}
int main()
{
    int x;
    scanf("%d", &x);
    func(x);
}
