#include<stdio.h>

int main()
{	
	int a[3];
	int i, count = 0;

	for(i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}

	for(i = 0; i < 3; i++)
	{
		if( a[i] < 168)
		{
			printf("CRASH %d\n", a[i]);
			count++;
		}
	}
	if(count == 0)
	{
		printf("NO CRASH\n");
	}

	return 0;
}

