#include <stdio.h>
#define N 80
int fun(char *str)
{
	int j= 0;
	int i = 0;
	int flag = 1;
	while(*str)
	{
		i++;str++;
	}
	
	for(j=0;j<i/2;j++)
	{
		if(str[i] == str[i-1-j])
		{
			;
		}

		else
		{
			flag = 0;
			return flag;
		}
	}

	
}


void main()
{
	 char s[N];
	 FILE *out;
         char *test[]={"1234321","123421","123321","abcdCBA"};
	 int i;
	 printf("Enter a string : ");
	 gets(s);
	 printf("\n\n");
	 puts(s);
	 if(fun(s))
		printf("YES\n");
	 else
		printf("NO\n"); 
	 /************************************/
	 out=fopen("out.dat","w");
	 for(i=0;i<4;i++)
	 	if(fun(test[i]))
			fprintf(out,"YES\n");
		else
			fprintf(out,"NO\n");
	 fclose(out);
	 /************************************/
}
