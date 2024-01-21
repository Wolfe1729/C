#include <stdio.h>
#include <assert.h>

int main(void)
{
	int i=0;
	assert(scanf("%d", &i));
	printf("%d", i * i);
	return 0;
}