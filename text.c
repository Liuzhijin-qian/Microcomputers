//用于测试写出的程序

#include "Contact.h"
int main()
{
	//选择需要的操作
	int input = 0;
	//创建通讯录
	struct Contact Con;
	//初始化通讯录
	InitializeContact(&Con);

	do
	{ 
		meun();
		printf("请输入你想要的操作->");
		scanf("%d", &input);
		switch (input)
		{
		case 增加:
			AddContact(&Con);
			break;
		case 删除:
		    DelContact(&Con);
		    break;
		case 查找:
		   SearchContact(&Con);
			break;
		case 修改:
		    ModifyContact(&Con);
			break;
		case 显示:
			ShowContact(&Con);
			break;
		case 排序:
		//	SortContact;
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


