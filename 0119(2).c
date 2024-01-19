#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int main(void)
{
	srand(time(0));
	int a, b, c;
	a = (rand() % 20) + 1;
	b = (rand() % (20 - a)) + 1;
	c = 20 - a - b;
	if (a > b && a > c)
	{
		printf("あなたは魔法使いになりました\n");
	}
	if (b > a && b > c)
	{
		printf("あなたはファイターになりました\n");
	}
	if (c > a && c > b)
	{
		printf("あなたは盗人になりました\n");
	}
	if (a == b && a > c)
	{
		printf("あなたはマジカルファイターになりました\n");
	}
	if (b == c && b > a)
	{
		printf("あなたはシーファイターになりました\n");
	}
	if (a == c && a > b)
	{
		printf("あなたはマジカルシーフになりました\n");
	}
	printf("inteligence:%d,stamina%d,charisma:%d", a, b, c);
	return 0;
}
