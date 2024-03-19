#include <stdio.h>

int main(void)
{
	int a = 0;
	int j;
	while (a < 5)
	{
		j = 0;
		while (j < 2)
		{
			printf ("me ");
			j++;
		}
		printf ("\n");
		a++;
	}
	return 0;

}
