#include <stdio.h>
int summation(int x, int y) {return x+y;}
int subtraction(int x, int y) {return x-y;}

void arethmatics(int first_number,int second_number,int (*first_func)(),int (*second_func)(),int (*sum_result),int *sub_result)
{
    *sum_result = first_func(first_number,second_number);
    *sub_result = second_func(first_number,second_number);
}


int main ()
{
    int x, y, z, k;
    int *summed_pointer , *subbed_pointer;
    scanf("%d", &x);
    scanf("%d", &y);
    summed_pointer = &k; 
    subbed_pointer = &z;
    arethmatics(x,y,summation,subtraction,summed_pointer,subbed_pointer);
    printf("The summation of two number is %d\n:",*summed_pointer);
    printf("The subtraction of two number is %d:",*subbed_pointer);
    //return 0;
    
}