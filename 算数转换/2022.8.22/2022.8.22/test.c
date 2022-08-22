#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <assert.h>


// 求Sn = a + aa + aaa + aaaa + aaaaa的前五项之和，其中a是一个数字
// 例如：2 +22 + 222 + 2222 + 22222

//int main()
//{
//	// 由a组成的前n项之和 - 不考虑溢出
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0; 
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

// 写一个函数打印arr数组的内容，不使用数组下标，使用指针
// arr是一个整形一维数组
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int* p = arr;
//	int* pend = arr + sz - 1;
//	int i = 0;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//}

// “水仙花数”是指一个n位数，其各位数字的n次方之和恰好等于该数本身，
// 如 ： 153 = 1^3 + 5^3 + 3^3 ，则153是一个“水仙花数”
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		// 判断i是否会自幂数
//		//1、计算i的位数 - n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2、计算i的每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		// 3、 判断
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


// 写一个函数，可以逆序一个字符串的内容
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left < right)
//	{
//		assert(str != NULL);
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//}

// 打印一个菱形
int main()
{
	int line = 0;
	scanf("%d", &line);
	// 上
	int i = 0;
	for (i = 0; i < line; i++)
	{
		// 打印一行
		// 空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		// *
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	// 下
	for (i = 0; i < line - 1; i++)
	{
		// 打印一行
		// 空格
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		// *
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

