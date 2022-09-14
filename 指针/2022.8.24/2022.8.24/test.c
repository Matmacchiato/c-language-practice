#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}


void menu()
{
	printf("*****************************\n");
	printf("***    1.add     2.sub    ***\n");
	printf("***    3.mul     4.div    ***\n");
	printf("***         0.exit        ***\n");
	printf("*****************************\n");
}

int main()
{
	int input = 0;
	// 计算器 - 计算整型变量的加、减、乘、除
	
	do {
		menu();

		int (*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
		int x = 0;
		int y = 0;
		int ret = 0;
		printf("请选择:>");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数>:");
			scanf("%d %d", &x, &y);
			ret = (pfArr[input])(x, y);
			printf("ret = %d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出程序\n");
			break;
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);
	return 0;
}