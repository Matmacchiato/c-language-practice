#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello zh";
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello zh";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}

// 返回一个最大值

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x < y)
//		z = y;
//	else
//		z = x;
//	return z; // 返回最大值
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b);
//	printf("%d", max);
//	return 0;
//}

// 函数返回类型的地方写出：void，表示函数不返回任何值，也不需要返回值
// 指针的应用（地址的重要性！！）
//void Swap(int* pa,int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	// 写一个函数，交换两个整型变量的值
//	printf("交换前：a=%d  b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("交换后：a=%d  b=%d\n", a, b);
//	return 0;
//}

//#include <math.h>
//
//int is_prime(int n)
//{
//	// 2 -> n-1 之间的数字
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	// 100-200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// 判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//}

// is_leap_year
// 如果判断是闰年返回1
// 不是闰年，返回0

// 方法1
//int is_leap_year(int n)
//{
//	if ((n%4 == 0 && n % 100 != 0) || (n%400 == 0))
//		return 1;
//	else
//		return 0;
//}

// 方法2
//int is_leap_year(int n)
//{
//	return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
//}
//
//
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//		
//	}
//	printf("\n总数为：%d\n", count);
//	return 0;
//}

//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] < k)
//			left = mid + 1;
//		else if (a[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;// 找不到了
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//	// 找到了就返回找到的位置的下标
//	// 找不到就返回-1
//	if (-1 == ret)
//		printf("找不到\n");
//	else
//		printf("找到了,下标是：%d\n", ret);
//}

//int Add(int*p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//
//	printf("%d", num);
//	Add(&num);
//	printf("%d", num);
//	Add(&num);
//	printf("%d", num);
//	return 0;
//}

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "bit";
	// 链式访问
	printf("%s\n", strcpy(arr1, arr2));

	printf("%d", printf("%d", printf("%d", 43)));// printf返回的是打印在屏幕上的字符的个数
	return 0;
}