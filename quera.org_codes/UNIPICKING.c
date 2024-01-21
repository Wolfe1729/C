#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>



int main(void)
{
	char foo[10] = { 0 };
	gets(foo);
	//printf("\n%s", foo);
	int dummy = strcmp(foo, "EAST");

	if (dummy ==0)
	{
		printf("YES");
		return 0;
	}
	printf("NO");
	return 0;
	
}