#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	// ����
//	int arr[3][4];
//	char arr2[3][10];
//	// ��ʼ�� - ������ͬʱ����ֵ
//	int arr3[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int arr4[3][4] = { 1,2,3,4,5,6,7 };// ����ȫ��ʼ�� - ���油0
//	int arr5[3][4] = { {1,2},{3,4},{5,6} };
//	int arr6[3][4] = { {1,2},{3,4} };
//	// arr[��][��] �п���ʡ�� �в�����ʡ
//	int* p = arr3[2];
//	printf("%d", *p);
//	/*int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr4[i][j]);
//		}
//		printf("\n");
//	}*/
//	return 0;
//}

// ð������
void bubble_sort(int arr[], int sz)
{
	// ȷ������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		// һ��ð������Ĺ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	// ��Ϊ��������
	// ��������Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	return 0;
}