#include "CalcMirc.h"
int main()
{
	int input = 0;
	int x, y = 0;
	int (*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do 
	{
		meun();
		printf("请输入你要的算数方法：\n");
		(void)scanf("%d", &input);
		
		if (input >= 1 && input <= 4) 
		{
			printf("请输入第一个数字->\n");
			(void)scanf("%d", &x);
			printf("请输入第二个数字->\n");
			(void)scanf("%d", &y);
			printf("%d\n", p[input](x, y));
		}
		else if(input > 4  ||   input <  0)
		{
			printf("输入错误，请重新输入\n");
		}

	} while (input);


	return 0;
}