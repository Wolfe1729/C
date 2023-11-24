// namakestan and shekarestan problem at quera.org

#include <stdio.h>

int main()
{
    int x, y, z, k;
    scanf("%d %d %d %d", &x, &y, &z, &k);
    // printf("%d,%d,%d,%d", x, y, z, k);
    int good_vax_she, good_vax_na;
    good_vax_she = x - y;
    good_vax_na = z - k;
    if (good_vax_she > good_vax_na)
        printf("Shekarestan");
    if (good_vax_na > good_vax_she)
    {
        /* code */ printf("Namakestan");
    }
    if (good_vax_na == good_vax_she)
        printf("Equal");
}