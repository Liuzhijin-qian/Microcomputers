//字符串逆序

#include <stdio.h>
#include <string.h>
#include <assert.h>


void reverse(char* p)
{
	assert(p);
	int ret = strlen(p);
	char* left = p;
	char* right = p+ret-1;
	while(left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

}
int main()
{

	char arr[100] = { "abbfsdfefsdfs" };
//在vs2019中需要这样	scanf_s("%s", arr,5);
//在要scanf_s语句的参数表中添加一个表示数组长度的参数。如scanf_s("%s",s,10);10表示数组长度为10个字符。	
reverse(arr);
	printf("%s", arr);


	return 0;
}

//字符串拷贝

#include <stdio.h>
#include <assert.h>
void my_strcpy(char* dest,char* src)
{
	assert(dest && src);
	while (*src != '\0')
	{
		*dest = *src;
		dest++; src++;
	}
	*dest = *src;

}
int main()
{
	char arr1[] = "####################";
	char arr2[] = "liuqian";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


#include <stdio.h>
#include <assert.h>
char* my_strcpy(char* dest, char* src)
{
	assert(dest && src);
	char* tmp = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return tmp;
}
int main()
{
	char arr1[] = "####";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}



//计算字符个数
#include <stdio.h>
#include <string.h>
#include <assert.h>
int my_strlen(const char* p)
{
	assert(p);
	int count = 0;
	while (*p != '\0')
	{
		count++; p++;

	}
	return count;
}
int main()
{
	char arr1[] = "########";
	printf("%zd\n", strlen(arr1));
	printf("%d\n", my_strlen(arr1));

	return 0;
}




//写一段代码告诉我们当前机器的字节序是啥
// 返回1 大端  返回0   小端


#include <stdio.h>
int check_XU()
{
	int a = 1;
	char* b = (char*)&a;
	if (*b == 1)
		return 0;
	else
		return 1;

}
int main()
{
	int a = check_XU();
	if (a == 1)
	{
		printf("大端\n");
	}
	else
	{
		printf("小端\n");
	}
	return 0;
}


