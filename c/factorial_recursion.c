#include<stdio.h>
int fact(int n);
main()
{
int a,x;
printf("Enter Value n");
scanf("%d", &a);
x = fact(a);
printf("Factorial of %d is %d\n",a,x);
}

int fact(int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	}
	else
		return 1;
}
