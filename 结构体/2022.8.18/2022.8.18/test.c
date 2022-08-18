#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////判断一个数的二进制有几个1
//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 10;
//	int ret = NumberOf1(n);
//	printf("%d\n", ret);
//}

// 判断一个数字是不是2的n次方
// k&(k-1) == 0

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


int NumberOf1(int n)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}
	return count;
}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//	int ret = m ^ n; // 相同为0 ，相异为1
//	count = NumberOf1(ret);
//	printf("%d\n", count);
//	return 0;
//}

// 正整数A和正整数B 的最小公倍数是指能被A和B整除的最小的正整数值，设计一个算法，求输入A和B的最小公倍数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	for (i = 1; ; i++)
//	{
//		if (a * i % b == 0)
//		{
//			printf("%d\n", a * i);
//			break;
//		}
//	}
//}

// 将一句话的单词进行倒置，标点不倒置。比如l like beijing. 经过函数后变为：beijing.like l
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;

		left++;
		right--;
	}
}

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	// 字符串整体翻转
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	
	// 每个单词逆序
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		// 逆序 一个单词
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);
	return 0;
}



