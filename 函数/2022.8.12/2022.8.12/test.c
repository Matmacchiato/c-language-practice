#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

// void print(unsigned int n)
//{
//	 if (n > 9)
//	 {
//		 print(n / 10);
//	 }
//	 printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	// �ݹ� - �����Լ������Լ�
//	print(num); // print�������Դ�ӡ�����������ֵ�ÿһλ
//	return 0;
//}

// ����1
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

// ����2
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "matthew";
//	// ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

// ��n�Ľ׳�
// 
// ����1
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	// ����
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

// ����2
//int Fac(n)
//{
//	if (n < 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}

// ���n��쳲�������
// 1 1 2 3 5 8 13 21 34 55  
// ����1
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

// ����2
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

// ��д������һ�� 1��100�����������г��ֶ��ٸ�����9
// 9 19 29 39 49 59 69 79 89 99
// 90 91 92 93 94 95 96 97 98 99
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

// ����1/1-1/2+1/3-1/4....1/9-1/10��ֵ����ӡ�����

// ����1
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum = sum - 1.0 / i;
//		else
//			sum = sum + 1.0 / i;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

// ����2
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


// ��10 �����������ֵ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int  i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//	return 0;
//}

// �˷���
//int main()
//{
//	int i = 1;
//	// ����
//	for (i = 1; i <= 9; i++)
//	{
//		// ��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ��ƶ�
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

// ��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
// �������ַ����е��ַ��������У����������ӡ
// ����ʹ��C�������е��ַ�����������

// 1.ѭ��д��
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = str[left]; // *(str + left)
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "matmachiato";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

// 2.�ݹ�д��
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str+1)>=2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "matmachiato";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

// дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���� ����DigiSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19

int DigitSum(int n)
{
	if (n > 9)
		return DigitSum(n / 10) + n % 10;
	else
		return n;
}
 
int main()
{
	int num = 1729;
	int sum = DigitSum(num);
	printf("%d\n", sum);
	return 0;
}