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

// ����һ�����ֵ

//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x < y)
//		z = y;
//	else
//		z = x;
//	return z; // �������ֵ
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

// �����������͵ĵط�д����void����ʾ�����������κ�ֵ��Ҳ����Ҫ����ֵ
// ָ���Ӧ�ã���ַ����Ҫ�ԣ�����
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
//	// дһ�������������������ͱ�����ֵ
//	printf("����ǰ��a=%d  b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("������a=%d  b=%d\n", a, b);
//	return 0;
//}

//#include <math.h>
//
//int is_prime(int n)
//{
//	// 2 -> n-1 ֮�������
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
//	// 100-200֮�������
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		// �ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//}

// is_leap_year
// ����ж������귵��1
// �������꣬����0

// ����1
//int is_leap_year(int n)
//{
//	if ((n%4 == 0 && n % 100 != 0) || (n%400 == 0))
//		return 1;
//	else
//		return 0;
//}

// ����2
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
//	printf("\n����Ϊ��%d\n", count);
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
//	return -1;// �Ҳ�����
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 10;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, key, sz);
//	// �ҵ��˾ͷ����ҵ���λ�õ��±�
//	// �Ҳ����ͷ���-1
//	if (-1 == ret)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ���,�±��ǣ�%d\n", ret);
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
	// ��ʽ����
	printf("%s\n", strcpy(arr1, arr2));

	printf("%d", printf("%d", printf("%d", 43)));// printf���ص��Ǵ�ӡ����Ļ�ϵ��ַ��ĸ���
	return 0;
}