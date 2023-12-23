#include <stdio.h>
long double func(long double x )
{
    return (x*x)*(x*x);
}

long double sum=0;
void integral()//main func
{

    for (size_t i = 1; i < 99999999999; i++)
    {   

        //printf ("%.18LF",func(i/300.0));
        sum =sum + (( 1/99999999999.0 ) * func(i/99999999999.0));
    }
    printf("\n%.100LF",sum);       
}

int main()//driver code
{   
    integral();
    return 0;
}