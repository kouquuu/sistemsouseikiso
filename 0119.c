#include<stdio.h>
#include<math.h>
int main(void)
{
	int a, b, c;
	double q, w, e, r;
	printf("aを入力してね！");
	scanf_s("%d", &a);
	while (a == 0)
	{
		printf("0以外の値を入力してね！");
		scanf_s("%d", &b);
	}
	printf("bを入力してね！");
	scanf_s("%d", &b);
	printf("cを入力してね！");
	scanf_s("%d", &c);
	r = b * b - 4 * a * c;
	q = (-b + sqrt(r)) / (2 * a);
	w = (-b - sqrt(r)) / (2 * a);
	e = (-b) / (2 * a);
	if (r > 0)
	{
		printf("実数解は２、それぞれ%lf,%lf", q, w);
	}
	else if (r == 0)
	{
		printf("実数解は１、%lfである", e);
	}
	else
	{
		printf("実数解なし");
	}
	return 0;
}
