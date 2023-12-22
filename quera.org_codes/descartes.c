#include <stdio.h>
void descartes(short int x,short int y )
{
    for(short int j = 0;j<y;j++)
    {
        for (short int a=0 ; a<x;a++)
        {
         printf(" _");
        }
         printf("\n");

        for (short int c = 0;c<=x;c++)
        {
            printf("| ");
        }
        printf("\n");
    }
    for (short int a = 0;a<x;a++){ printf(" _"); }   
}
int main()//driver code
{
    short int x,y;
    scanf("%hd%hd",&y,&x);
    descartes(x,y);
    return 0;
}
