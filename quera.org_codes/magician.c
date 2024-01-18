#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
struct Change
{
	int start, end;
};
	int i;
int main(void)
{

	char values[5] = {'1','0' ,'0', '0','\0'}, temp; int entry;
	assert(scanf("%d",&entry));

	struct Change changes[10000];



	for (int i = 0; i < entry; i++)
	{
		assert(scanf("%d %d",&changes[i].start, &changes[i].end));
	}

	for (int i = 0; i < entry; i++)
	{
		temp = values[(changes[i].start) - 1];
		values[(changes[i].start )- 1] = values [(changes[i].end) - 1];
		values[(changes[i].end)-1] = temp;
		//printf("%s", values);
		
	}

	for (i = 0; i < 3; i++)
	{
		if (values[i] == '1')
		{
			break;
		}
	}
	//puts(values);
	printf("\n%d", i+1);
	//while (1);
	return 0;

}