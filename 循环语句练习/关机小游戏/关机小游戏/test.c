#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
game:
	printf("你的电脑将在一分钟后关机,输入我爱你zh即可解除关机\n");
	scanf("%s", input);
	if (strcmp(input, "我爱你zh") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto game;
	}
	return 0;
}