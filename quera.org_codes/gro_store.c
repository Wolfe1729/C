#include <stdio.h>
int remaind=0;
void function(int x )
{
    remaind += x%10;
    x/=10;
    if(x>0){return function(x);}
    printf("%d",remaind);
}
 int main()
 {
    int x;scanf("%d",&x);
    function(x);
    return 0;
 }