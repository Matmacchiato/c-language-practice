#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
game:
	printf("��ĵ��Խ���һ���Ӻ�ػ�,�����Ұ���zh���ɽ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "�Ұ���zh") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto game;
	}
	return 0;
}