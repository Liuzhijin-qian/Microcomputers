#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
float fun (float h )
{
	/*float c = 0.0;
    int a = h*1000;
	int b = a%10;
	if(b >= 5)
	{
		a = a + 10 - b;
	}
	else
	{
		a = a - b;
	}

	c = a / 1000.0;
	return c;*/

	int a = (int)(h*1000 + 5)/10;
	return (float)a/100.0;

}
void main()
{
  FILE *wf;
  float a;
  system("CLS");
  printf("Enter a: ");
  scanf ("%f",&a);
  printf("The original data is :  ");
  printf("%f\n\n", a);
  printf("The  result : %f\n", fun(a));
/******************************/
  wf=fopen("out.dat","w");
  fprintf(wf,"%f",fun(8.32533));
  fclose(wf);
/*****************************/
}
