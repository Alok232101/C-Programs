main()
{
	addition();
	subtraction();
	multiply();
	divide();
	reminder();
    getch();
}


addition()
{
	int a,b,c;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d",c);
}

subtraction()
{
	
	int a,b,c;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	c=a-b;
	printf("%d",c);
}

multiply()
{
	
	int a,b,c;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	c=a*b;
	printf("%d",c);
}

divide()
{
	
	int a,b,c;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	c=a/b;
	printf("%d",c);
}

reminder()
{
	
	int a,b,c;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	c=a%b;
	printf("%d",c);
}
