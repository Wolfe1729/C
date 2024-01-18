#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pair {
	char first[10];
	char second[10];
};

int main(void)
{
	int total,i,j;
	char temp [10];
	char temp2[10];
	char character, *ad ;
	scanf("%d", &total);
	
	struct Pair pair[50] = { "0","0" };

	for (i = 0; i < total; i++)
	{
		scanf("%s", &temp);
		scanf("%s", &temp2);
		strcpy(pair[i].first,temp);
		strcpy(pair[i].second, temp2);
	}
	for (i = 0; i < total; i++)
	{
		if (strlen(pair[i].first) != strlen(pair[i].second))
		{
			printf("NO");
			if (i < total - 1)
			{
				printf("\n");
			}
			continue;
		}
		for (j = 0; j < strlen(pair[j].first); j++)
		{

			character = pair[i].first[j];//the char we want to search.. . 


			ad = strchr(pair[i].second, character);

			if (ad == NULL || strlen(pair[i].first) != strlen(pair[i].second))
			{
				printf("NO");
				if (i < total - 1)
				{
					printf("\n");
				}
				break;}

		}	if (ad != NULL)
		{
			printf("YES");
			if (i < total - 1)
			{
				printf("\n");
			}
		}
	}

	return 0;
}