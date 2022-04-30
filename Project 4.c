#include <stdio.h>
int main()
{
	char number;
	printf("Enter a number");
	scanf("%d", number);
	int x;
	switch(x)
	{
		case 1:x=0;
		printf("Yes");
		case 2:x=1;
		printf("Yes");
		default: printf("No");
	}
	return 0;
}
