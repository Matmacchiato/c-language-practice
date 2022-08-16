#include <stdio.h>

//int main()
//{
//	int a = 10;
//	printf("%p\n", &a); // & - 取地址操作符
//	int* pa = &a; // pa是用来存放地址的  - pa就是一个指针变量
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000 00000000 00000000 00000011
//	//00000011 - a
//	char b = 127;
//	//00000000 00000000 00000000 01111111
//	//01111111 - b
//
//	char c = a + b;
//	//00000000 00000000 00000000 00000011
//	//00000000 00000000 00000000 01111111
//	//00000000 00000000 00000000 10000010
//
//	//10000010 - c
//	//11111111 11111111 11111111 10000010 - 补码
//	//11111111 11111111 11111111 10000001 - 反码
//	//10000000 00000000 00000000 11111110 - 原码
//	// -126
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("a");
//	if (c == 0xb6000000)
//		printf("a");
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c)); // 1
//	printf("%u\n", sizeof(+c));// 4
//	printf("%u\n", sizeof(-c));// 4
//	printf("%u\n", sizeof(!c));// 4
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	// int* p = arr;
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}

int main()
{
	int len = my_strlen("abc");
	printf("%d\n", len);

	return 0;
}