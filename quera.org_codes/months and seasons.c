//The program takes a number resembling a month and returns the season


//declerations
#include <stdio.h>

//functions
int function(int x )
{

    if(x<=3) return 1;
    else if (x>3 && x<=6) return 2;
    else if (x>6 && x<=9) return 3;
    else if (x>9 && x<=12)return 4;
    else return -1;

}
//main function
int main()
{
    int input_;
    scanf("%d",&input_);

    printf("%d",function(input_));

    return 0;
}