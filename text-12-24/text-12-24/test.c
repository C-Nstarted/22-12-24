#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ַ�������ʹ�ú�����

//#include <string.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}
// 
// //my_strlen
//1.�������ķ���
//2.�ݹ�ķ���
//3.ָ��-ָ��
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


//strcpy����
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
//	//����strָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *str++)
//	{
//		;
//	}
//	//����Ŀ�ĵص���ʼ��ַ
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




//strcat   -    �ַ���׷��
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
//	//�ҵ��ַ�����\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//׷��
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






//strcmp    -�ַ����Ƚ�     �Ƚ�����ĸ�Ĵ�С��λ�ÿ���Ĵ�
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