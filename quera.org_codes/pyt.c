// solving a question at quera.org
// this program takes a number as its input and checks whether it is a
// perfect number.. .
#include <stdio.h>
void func(int x)
{
    int sum = 0, a;
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
}
int main()
{
    int x;
    scanf("%d", &x);
    func(x);
    return 0;
}