#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	printf("%d",a);
		else if(c>a)
	printf("%d",c);
	else if(c>b)
	printf("%d",c);
	else if(b>a)
	printf("%d",b);
	else if(a>c)
	printf("%d",a);
	else if(b>c)
	printf("%d",b);

}
