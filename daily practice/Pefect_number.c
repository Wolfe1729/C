#include <stdio.h>
int func(int x)
{
    int sum, a;
    for (a = 1; a < (x - 1); a++)
    {
        if (x % a == 0)
        {
            sum = sum + a;
        }
    }
    if (sum == x)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
int main()
{
    int x;
    scanf("%d", &x);
    func(x);
    return 0;
}