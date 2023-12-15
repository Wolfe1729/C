//declerations
#include <stdio.h>


//function
int output(int x)
{
    short int flag=1;
    short int single_indiv = x%(flag*10);
    printf("\n%d: ",single_indiv);

    //da loop
    for (short int i = 0; i < single_indiv; i++)
    {
        printf("%d",single_indiv);
    }

    flag++;

    if ( x%(flag*10) >0 )
    {
        return output(x/10);
    }
        
}

//main
int main()
{
    int input_;
    scanf("%d",&input_);

    output(input_);
    return 0;
}

