//desired libraries are included in the custom header... .


#include "temp_header.h"


int main()
{

    //storage codes
    ld input_value;
    printf("Enter any real number:");
    scanf("%LF",&input_value);


    //function codes
    printf("Using the bridged function we have :%LF\n\n",t(input_value)  );

    printf("And using the direct function we have :%lf",(   tan(2*input_value)   )    );
    

    return 0;

}