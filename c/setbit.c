#include<stdio.h>

main()
{
	int a = 10,x = 9,i;
	printf("Before set bit %d\n",a);
	a = a|(1<<x);//set a bit
	printf("After set bit %d\n",a);
	a = a&~(1<<x);//clearing bit
	printf("After clearing bit value is %d",a);
	
	a = a^(1<<x); //	Toggling a bit
	for(i=0;i<=31;i++)
		printf("%d bit value is %c\n",i,a&(1<<i)?'1':'0');
 	printf("After toggle value is %d",a);	
	return 0;

	
}
