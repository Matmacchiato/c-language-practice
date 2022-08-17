#include <stdio.h>

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	// 成员变量
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//}; //s1,s2;//s1和s2也是结构体变量
////// s1,s2是全局变量
//
// void print2(struct Stu* ps)
//{
//	printf("%c %d $If %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//
//int main()
//{
//	//s是局部变量
//	struct Stu s = { { 'w', 20, 3.14 }, "zh", 22, "2020.8.17" };
//	printf("%s ", s.name);
//
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	print2(&s);
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	assert(src != NULL);// 断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//#include <assert.h>
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);// 断言
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
//	/*my_strcpy(arr1, arr2);*/
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int my_strlen(char* str,int sz)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= sz - 1; i++)
//	{
//		if (*str == '\0')
//		{
//			break;
//		}
//		count++;
//	}
//	return count;
//}
#include <assert.h>
size_t my_strlen(const char* str)
{
	assert(str != NULL);
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


int main()
{
	char str[] = "abcdefgh";
	
	int ret = my_strlen(str);
	printf("%d\n", ret);
}