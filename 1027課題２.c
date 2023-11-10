#include <stdio.h>

int main(void)
{
	int n,m;
	printf("please enter number:");
	scanf_s("%d", &n);
	m = n % 2;
	if (m == 0)
	{
		printf("偶数");
	}
	else
	{
		printf("奇数");
	}

	return 0;
}
