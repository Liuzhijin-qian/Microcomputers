#include "CalcMirc.h"
int main()
{
	int input = 0;
	int x, y = 0;
	int (*p[5])(int, int) = { 0,Add,Sub,Mul,Div };
	do 
	{
		meun();
		printf("��������Ҫ������������\n");
		(void)scanf("%d", &input);
		
		if (input >= 1 && input <= 4) 
		{
			printf("�������һ������->\n");
			(void)scanf("%d", &x);
			printf("������ڶ�������->\n");
			(void)scanf("%d", &y);
			printf("%d\n", p[input](x, y));
		}
		else if(input > 4  ||   input <  0)
		{
			printf("�����������������\n");
		}

	} while (input);


	return 0;
}