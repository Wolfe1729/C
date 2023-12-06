//linked function
//more info in the header... .
//the function is already declared in the header.
#include "temp_header.h"


ld t(ld in_value)//this function is linked in main.c via header... .
{
    ld upper_value,down_value;
    ld result;


    upper_value = (   2*(  tan(in_value)  )   ); 
    down_value  = (  1-(   tan(in_value)  *  tan(in_value)   ));
    result =( upper_value   /   down_value ); 
    

    //result is equal to tangent for 2x in mathmatics... . 

    return result;
}