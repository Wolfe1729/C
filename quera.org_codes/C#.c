#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
	int entry = 0;
	assert(scanf("%d", &entry));
	for (int i = 0; i < entry; i++)
	{
		printf("#");
	}
	return 0;
}