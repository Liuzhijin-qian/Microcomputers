//用于写函数的实现
#include "Contact.h"
void meun()
{
	printf("*********************\n");
	printf("***1.增加   2.删除***\n");
	printf("***3.查找   4.修改***\n");
	printf("***5.显示   6.排序***\n");
	printf("***    0.退出     ***\n");
	printf("*********************\n");
}

//初始化通讯录的函数实现
void InitializeContact(struct Contact* p)
{
	memset(p->data, 0, sizeof(p->data));
	p->size = 0;
}


//增加联系人的函数的实现
void AddContact(struct Contact* p)
{
	if (p->size == MAX)
	{
		printf("通讯录已满，无法添加\n");
	}
	else
	{
		printf("请输入要添加的名字->\n");
		scanf("%s", p->data[p->size].NAME);
		printf("请输入要添加的年龄->\n");
		scanf("%d", &(p->data[p->size].AGE));
		printf("请输入要添加的性别\n");
		scanf("%s", p->data[p->size].SEX);
		printf("请输入要添加的电话\n");
		scanf("%s", p->data[p->size].TELE);
		printf("请输入要添加的地址\n");
		scanf("%s", p->data[p->size].ADDRESS);
		
		p->size++;
		printf("添加成功\n");
	}
	

}


//删除联系人
void DelContact(struct Contact* p)
{

	if (p->size == 0)
	{
		printf("通讯录为空 无法删除\n");
	}
	else 
	{
		char name[MAX_NAME];
		printf("请输入要删除的名字->");
		scanf("%s", name);
		//全部遍历
		int i = 0;
		for (i = 0; i < p->size; i++)
		{
			if (strcmp(p->data[i].NAME, name) == 0)
			{
				break;
			}
		}
		if (i == p->size)
		{
			printf("要删除的人不存在\n");

		}
		else
		{
			int j = 0;
			for (j = i; j < p->size - 1; j++)
			{
				p->data[i] = p->data[i + 1];
			}
			p->size--;
			printf("删除成功\n");
		}
	}
	
	

}

//查找联系人的信息
void SearchContact(struct Contact* p)
{
	if (p->size == 0)
	{
		printf("通讯录为空 无法查找\n");
	}
	else
	{
		char name[MAX_NAME];
		printf("请输入要查询的名字：");
		scanf("%s", name);
		int i = 0;
		for (i = 0; i < p->size; i++)
		{
			if ((strcmp(p->data[i].NAME, name) == 0))
			{
				printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t", "名字", "年龄", "性别", "电话", "地址");
				printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
					p->data[i].NAME,
					p->data[i].AGE,
					p->data[i].SEX,
					p->data[i].TELE,
					p->data[i].ADDRESS);
				break;

			}
			else
			{
				printf("你要查找的人不存在");
			}
		}
	}
	
}

//修改联系人
void ModifyContact(struct Contact* p)
{
	if (p->size == 0)
	{
		printf("通讯录为空 无法修改\n");
	}
	else
	{
		char name[MAX_NAME];
		printf("请输入要修改的联系人");
		scanf("%s", name);
		int i = 0;
		for (i = 0; i < p->size; i++)
		{
			if (strcmp(p->data[i].NAME, name) == 0)
			{
				printf("请输入要添加的名字->\n");
				scanf("%s", p->data[i].NAME);
				printf("请输入要添加的年龄->\n");
				scanf("%d", &(p->data[i].AGE));
				printf("请输入要添加的性别\n");
				scanf("%s", p->data[i].SEX);
				printf("请输入要添加的电话\n");
				scanf("%s", p->data[i].TELE);
				printf("请输入要添加的地址\n");
				scanf("%s", p->data[i].ADDRESS);
				break;
			}
		}

		if (i == p->size)
		{
			printf("要查找的人不存在\n");
		}

	}


}
//显示通讯录的联系人信息
void ShowContact(struct Contact* p)
{
	if (p->size == 0)
	{
		printf("通讯录为空 无法打印\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < p->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
				p->data[i].NAME,
				p->data[i].AGE,
				p->data[i].SEX,
				p->data[i].TELE,
				p->data[i].ADDRESS);
		}
	}
}








