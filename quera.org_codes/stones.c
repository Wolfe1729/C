#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define n 6

struct Stones
{
	char *name;
	char *colour;
};




int main(void)
{
	char input[50] = { 0 }; int strcmp_res;
	struct Stones stone[n];



	//**************************
	//		value init
	//************************** 
	
	stone[0].name   =  "space";
	stone[0].colour = "blue";

	stone[1].name = "mind";
	stone[1].colour = "yellow";

	stone[2].name = "reality";
	stone[2].colour = "red";

	stone[3].name = "power";
	stone[3].colour = "purple";

	stone[4].name = "time";
	stone[4].colour = "green";

	stone[5].name = "soul";
	stone[5].colour = "orange";
	//end of structs

	assert(gets(input));//name of stone
	//int f =strcmp(input, stone[0].name);
	//printf("%d", f);



	for (int i = 0; i < 6; i++)
	{
		strcmp_res = strcmp(stone[i].name, input);
		//printf("%d", strcmp_res);


		if (strcmp_res == 0)
		{
			puts(stone[i].colour);
		}
	}
	return 0;
}