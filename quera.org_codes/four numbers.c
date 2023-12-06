#include <stdio.h>


int main()

{
    //input storage codes
    int index;
    int a,b,c,d;
    printf("Enter the numbers with space : ");
    scanf("%d%d%d%d%d", &index, &a, &b, &c, &d );


    //main code
    int i,count=0;

    for (int i = index; i > 0; i= i-1)
    {
        //flag.disabled
        //printf("%d is checked... \n", i);

        //critical if_statement
        if (i%a==0 || i%b==0 || i%c==0 || i%d==0 )
        {
            count = count + 1;
        }    
    }
    
    //final response
    printf("%d",count);
    return 0;
}