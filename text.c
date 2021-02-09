//用于测试写出的程序

#include "Contact.h"
int main()
{
	int input = 0;

	do
	{ 
		meun();
		printf("请输入你想要的操作->");
		scanf("%d", &input);
		switch (input)
		{
		case 增加:
			AddContcat;
			break;
		case 删除:
			DelContact;
		    break;
		case 查找:
			SearchContact;
			break;
		case 修改:
			ModifyContact;
			break;
		case 显示:
			ShowContact;
			break;
		case 排序:
			SortContact;
			break;
		case 退出:
			printf("程序退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	
	} while (input);




	return 0;
}


