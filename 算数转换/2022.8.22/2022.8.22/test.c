#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <assert.h>


// ��Sn = a + aa + aaa + aaaa + aaaaa��ǰ����֮�ͣ�����a��һ������
// ���磺2 +22 + 222 + 2222 + 22222

//int main()
//{
//	// ��a��ɵ�ǰn��֮�� - ���������
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

// дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��
// arr��һ������һά����
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

// ��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ�������
// �� �� 153 = 1^3 + 5^3 + 3^3 ����153��һ����ˮ�ɻ�����
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		// �ж�i�Ƿ��������
//		//1������i��λ�� - n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2������i��ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		// 3�� �ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


// дһ����������������һ���ַ���������
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

// ��ӡһ������
int main()
{
	int line = 0;
	scanf("%d", &line);
	// ��
	int i = 0;
	for (i = 0; i < line; i++)
	{
		// ��ӡһ��
		// �ո�
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
	// ��
	for (i = 0; i < line - 1; i++)
	{
		// ��ӡһ��
		// �ո�
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

