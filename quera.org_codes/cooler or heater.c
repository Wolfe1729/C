#include <stdio.h>
#include <string.h>
#include <assert.h>

struct Game
{
	int temper[100] ;
};

int main(void)
{
	int in,i;
	struct Game struc;
	assert(scanf("%d", &in));

	for (i = 0; i < in; i++)
	{
		assert(scanf("%d", &struc.temper[i]));
	}

	

	
	

	for (i = 0; i < in; i++)
	{
		if (struc.temper[i] > 15)
		{
			printf("Cooler");

			if (i < in - 1)
			{
				printf("\n");
				
			}


			
		}

		if (struc.temper[i] < 15)
		{
			printf("Heater");

			if (i < in - 1)
			{
				printf("\n");

			}

		}


	}

	return 0;
}