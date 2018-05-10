#include<stdio.h>
int main()
{
	char c[10] = "naga";
	char m[10] = "naga";
	memcpy(c+4,c,5);
	memmove(m+4,m,5);
	printf("%s\n",c);
	printf("%s\n",m);

}

