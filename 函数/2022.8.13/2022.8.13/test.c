#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//// 编写一个函数实现n的k次方，使用递归实现
//double Pow(int n, int k)
//{
//	if (k == 0)
//		return 1.0;
//	else if (k > 0)
//		return n * Pow(n, k - 1);
//	else
//		return 1.0 / (Pow(n, -k));
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
int main()
{
	int a = 10;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };// 完全初始化
	int arr2[] = { 1,2,3,4,5 };// 不完全初始化
	// int arr2[5] = { 1,2,3,4,5 }; // 与上面的相等
	
	char ch5[] = "zh";
	char ch6[] = { 'z','h' };

	printf("%d\n", strlen(ch5));
	printf("%s\n", ch5);
	printf("%s\n", ch6);
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]);


	int* p = arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}
