#include <stdio.h>

int SumDigits(int n);

int main(void)
{
	int sum = SumDigits(53);
	printf("sum : %d\n", sum);

	return (0);
}


int SumDigits(int n)
{
	if (n < 10 && n >= 0)
		return n;

	return SumDigits(n % 10) + SumDigits(n % 10);
}
