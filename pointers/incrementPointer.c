#include <stdio.h>

int main() 
{
	int x = 10;
	int *y = &x;


	printf("Value of y before increment: %p\n", (void *)y);
	y++;

	printf("Value of y after increment: %p\n", (void *)y);

	return 0;

}
