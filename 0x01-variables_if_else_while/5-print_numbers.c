#include <stdio.h>

/**
 * main-prints all single digit numbers of base.
 * *Return:0 no error, non zero if error
 */
int main(void)
{
	int num;

	for (num = '0'; num <= 10; num++)
	{
		printf("%d", num);
	}
	printf('\n');
	return (0);
}
