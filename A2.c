//冒泡排序

//
//#include <stdio.h>
//void Bubble(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	printf("\n");
//
//
//	Bubble(arr,10);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	printf("\n");
//
//	return 0;
//}





//字符串拷贝
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcat(char* dest, const char* src)
{
	assert(dest && src);
	char* t = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return t;
}
int main()
{

	char arr1[10] = "abcd";
	char arr2[] = "ef";
	strcat(arr1, arr2);
	printf("%s\n", arr1);
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}







//模拟实现memcpy
#include <stdio.h>
#include <assert.h>
void* my_memcpy(void* dest, const void* src, int sz)
{
	void* p = dest;
	assert(dest && src);
	while (sz--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return p;
}
int main()
{
	int arr1[] = { 0,1,2,3,4,5 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, sizeof(arr1));
	int i = 0;
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;

重点在于把 void* 强制转化为  char*  然后一个一个字节的代替。



