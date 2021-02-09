#pragma once
#define _CRT_SECURE_NO_WARNINGS

//用于写函数的声明  宏定义  枚举等等

#include <stdio.h>
#define MAX_NAME    20
#define MAX_SEX     5
#define MAX_ADDRESS 20
#define MAX_TELE    12
#define MAX         50

enum Caozuo
{
	退出,增加,删除,查找,修改,显示,排序
};

//用结构体来存放联系人的信息
struct PeoInfor
{
	char NAME[MAX_NAME];
	char SEX[MAX_SEX];
	char ADDRESS[MAX_ADDRESS];
	char TELE[MAX_TELE];
	int age;

};

//通讯录的类型
struct Contacr
{
	struct PeoInfor data[MAX];//存放联系人的信息
};
//菜单的函数
void meun();

//增加联系人的函数