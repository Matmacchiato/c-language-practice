#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////�ж�һ�����Ķ������м���1
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

// �ж�һ�������ǲ���2��n�η�
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
//	int ret = m ^ n; // ��ͬΪ0 ������Ϊ1
//	count = NumberOf1(ret);
//	printf("%d\n", count);
//	return 0;
//}

// ������A��������B ����С��������ָ�ܱ�A��B��������С��������ֵ�����һ���㷨��������A��B����С������
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

// ��һ�仰�ĵ��ʽ��е��ã���㲻���á�����l like beijing. �����������Ϊ��beijing.like l
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
	// �ַ������巭ת
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	
	// ÿ����������
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		// ���� һ������
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);
	return 0;
}



