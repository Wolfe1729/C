#include <stdio.h>
int my_sum(int x, int y) { return x + y; }
int my_prod(int x, int y) { return x * y; }

void rect(int *p, int *a, int l, int w, int (*sum_func)(), int (*prod_func)())
{
    *p = 2 * sum_func(l, w);
    *a = prod_func(l, w);
}
int main()
{
    int z, q, P, A, *x = &P, *y = &A;
    scanf("%d %d", &z, &q);
    rect(x, y, z, q, my_sum, my_prod);
    printf("%d %d", P, A);
}