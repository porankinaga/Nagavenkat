main()
{
	int a = 10,x = 5,i;
	printf("Before set bit %d\n",a);
	for(i=0;i<=31;i++)
		printf("%d bit value is %c\n",i,a&(1<<i)?'1':'0');
	a = a|(1<<x);//set a bit
	printf("After set bit %d\n",a);
	a = a&~(1<<x);//clearing bit
	printf("After clearing bit value is %d",a);

	
	return 0;
}
