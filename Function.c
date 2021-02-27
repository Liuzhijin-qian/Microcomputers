#include "CalcMirc.h"

void meun()
{
    printf("*******************\n");
	printf("***1.Add  2.Sub****\n");
	printf("***3.Mul  4.Div****\n");
	printf("******0.Exit*******\n");
	printf("*******************\n");
}


int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}