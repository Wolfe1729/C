#include <stdio.h>

int rem,reverse;//var for the following function
int func(int y)//the input is passed here and gets inverted
{
    while (y!=0)
    {
        rem = y%10;
        reverse = reverse*10 +rem;
        y= y/10; 
    }
    return reverse;    
}//pass

int rich(int x )//real meat and potatoes
{
    int single_indiv = 0;
    int number =func(x);
    //printf("%d",number);//checker for the inverted value
     
    //the variable "number" is inverted successfuly then passed to the loop.

    while (number)//every individual number of the integer is taken and printed with respect to its value. e.g.-->  4: 4444
    {
       
        single_indiv = number % (10);//da division
        printf("%d: ",single_indiv);
        //pass


        for (int i = 0; i<single_indiv ; i++ )//the desired print.
        {
          printf("%d",single_indiv);
        //pass
        }
        printf("\n");
        number /= 10;
    }
}


int main()//driver code...   USELESSS
{
    int input;
    scanf("%d",&input);
    rich(input);
    //printf("%d",func(x));//works perfeclty fine
    return 0;
}