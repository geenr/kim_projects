#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main(void)
{
	typedef char * string;
	string name[] = {"kim", "joan"};
	string number[] = {"0705", "0703"};

	char nam[20];
	printf("enter name ");
	scanf("%s", nam);
	for (int i = 0; i < 3; i++)
	{
		if (strcmp(name[i], nam) == 0)
		{
			printf("found %s\n", number[i]);
			return 0;
		}
		else
			printf("not found\n");
		return 1;
	}
}
