#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//字符串函数使用和剖析

//#include <string.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}
// 
// //my_strlen
//1.计数器的方法
//2.递归的方法
//3.指针-指针
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(*str != NULL);
//	while (*str != '\0')//while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
// int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}


//strcpy函数
#include <string.h>
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <assert.h>
//char* my_strcpy( char* dest, const char* str)
//{
//	assert(*dest != NULL);
//	assert(*str != NULL);
//	char* ret = dest;
//	//拷贝str指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	//返回目的地的起始地址
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}




//strcat   -    字符串追加
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include <assert.h>
//char* my_strcat(char* dest, const char* src)
//{
//	assert (*dest != NULL);
//	assert (*src != NULL);
//	char* ret = dest;
//	//找到字符串的\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}






//strcmp    -字符串比较     比较首字母的大小（位置靠后的大）
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqewr";
//	int ret = strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
// }


#include <assert.h>
my_strcmp(const char* str1,const char* str2)
{
	assert(*str1 != NULL);
	assert(*str2 != NULL);
	while (*str1 == *str2)
	{
		if (*str1 == '\0' && *str2 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "sqewr";
	int ret = my_strcmp(p1, p2);
	printf("%d\n", ret);
	return 0;
 }