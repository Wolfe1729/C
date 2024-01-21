#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Foobar
{
	int hor;
	int ver;
	int val;
};

int main(void)
{
	
	
		struct Foobar indiv[6];
		int i, j;

		//1
		indiv[0].hor = 1;
		indiv[0].ver = 1;
		indiv[0].val = 1;

		//2
		indiv[1].hor = 1;
		indiv[1].ver = 2;
		indiv[1].val = 2;
		//3
		indiv[2].hor = 2;
		indiv[2].ver = 1;
		indiv[2].val = 3;
		//4
		indiv[3].hor = 2;
		indiv[3].ver = 2;
		indiv[3].val = 4;

		assert(scanf("%d%d", &indiv[4].val, &indiv[5].val));


		for (i = 0; i < 3; i++)
		{
			if (indiv[i].val == indiv[4].val)
			{
				break;
			}
		}


		for (j = 0; j < 3; j++)
		{
			if (indiv[j].val == indiv[5].val)
			{
				break;
			}
		}

		if (indiv[i].ver == indiv[j].ver && indiv[i].hor == indiv[j].hor)
		{
			printf("0");
		}
		else if (indiv[j].hor == indiv[i].hor)
		{
			printf("1");
		}

		else if (indiv[j].ver == indiv[i].ver)
		{
			printf("1");
		}
		

		else
		{
			printf("2");
		}
	return 0;
}