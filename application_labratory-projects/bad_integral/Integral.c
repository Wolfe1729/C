#include <stdio.h>
long double func(long double x )
{
    return x*(x*x);
}

long double sum=0;
void integral(float a, float b)
{
long double g = a-b;
    for (size_t i = 1; i < 999999999999999; i++)
    {   

        //printf ("%.18LF",func(i/300.0));
        sum =sum + (( g/999999999999999.0 ) * func(i/999999999999999.0));
    }
    printf("\n%.18LF",sum);       
}

int main()//driver code
{   float in_1,in_2;
    scanf("%f%f",&in_1,&in_2);
    integral(in_1,in_2);
    return 0;
}