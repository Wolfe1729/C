#include <stdio.h>
#include "odd_number.h"
int main()
{
    int y ;
    scanf("%d",y);
    int *u =&y;
    int x = is_odd(*u);
    printf ("%d",x);
    return 0 ;
}