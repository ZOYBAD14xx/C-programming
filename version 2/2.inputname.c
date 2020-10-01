#include <stdio.h>
int main()
{
	char name[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
	char *name_index = &name[-1];
	char n[] = {"Name = "};
	int i;
	printf(n);
	for (i = 0; i < 10; i++)
	{
		printf("%c, ", name[i]);
	}
	printf("\n");
	printf("Input = ");
	scanf("%d",&i);
	printf("Show Name = %c", name_index[i]);
}

