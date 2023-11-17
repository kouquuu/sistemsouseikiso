#include <stdio.h>

int main(void)
{
	char a;

	printf("文字を入力してください");
	scanf_s("%c", &a);

	if ((a >= 'A') && (a <= 'Z'))
	{
		printf("アルファベットの大文字が含まれています！\n");
	}
	else
	{
		printf("大文字は含まれていません！\n");
	}

	return 0;
}
