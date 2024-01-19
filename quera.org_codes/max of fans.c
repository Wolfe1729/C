//I elevated the question but anyway... .
// comments are the areas i changed
// the question itself says that we should 
//printf the max of zeros in the string wich are next to
//each other

#include <stdio.h>
#include <string.h>

void printer(int maxof0, int maxof1)
{
	int i;
	////for 0
	//if (maxof0 > maxof1)
	//{
	//	for (i = 0; i < maxof0; i++)
	//	{
	//		printf("0");
	//	}
	//}

	////for 1
	//if (maxof1 > maxof0)
	//{
	//	for (i = 0; i < maxof1; i++)
	//	{
	//		printf("1");
	//	}
	//}

	printf("%d", maxof0);
}

int main(void)
{
	int i;
	char values[10050];
	int maxof0 = 0;
	int maxof1 = 0;
	
	int tmpof0 = 0;
	int tmpof1 = 0;


	scanf("%s", values);//input is like : 1000101101 or 1010010010000 
	int values_len = strlen(values);


	for (i = 0; i < values_len; i++)
	{
		//for value '0'
		if (values[i] == '0')
		{
			tmpof0 = 1;
			while (values[i + 1] == '0')
			{
				tmpof0 += 1;
				i += 1;
			}
			maxof0 = (maxof0 < tmpof0 ? tmpof0 : maxof0);
		}


			//for value '1'
			if (values[i] == '1')
			{
				tmpof1 = 1;
				while (values[i + 1] == '1')
				{
					tmpof1 += 1;
					i += 1;
				}
				maxof1 = (maxof1 < tmpof1 ? tmpof1 : maxof1);
			}

	}
	printer(maxof0, maxof1);
	return 0;
}