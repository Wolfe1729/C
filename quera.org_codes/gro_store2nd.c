#include <stdio.h>
int remaind,new;
void func(int x )
{
    remaind = x%10;
    new = new*10 + remaind;
    x/=10;
    if (x>0) {return func(x);}
    printf("%d",new);
}

int main ()
{
    int x;scanf("%d",&x);
    func(x);
    return 0;
}