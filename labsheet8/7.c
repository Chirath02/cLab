#include<stdio.h>
int fiba(int n)
{
	int t,i=0,i1=1;
	while(i<=n)
	{	
		if(n==i||n==i1)
		return 1;
		 t=i1;
		i1=i+i1;
		i=t;
	}
	return 0;
}
int pal(int n)
{
	int a=n,l=0;
	while(a)
	{
		l=l*10+a%10;
		a/=10;
	}
	if(l==n)
	return 1;
	return 0;
}
int arm(int n)
{
	int a=n,l=0;
	while(a)
	{
		l+=(a%10)*(a%10)*(a%10);
		a/=10;
	}
	if(l==n)
	return 1;
	return 0;
}
int per(int n)
{
int i,a=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		a+=i;
	}
	if(a==n)
	return 1;
	return 0;
}
int pri(int n)
{
int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}

	return 1;

}
main()
{
	int a;
	printf("Enter the no :");
	scanf("%d",&a);
	if(pal(a))
	printf("The no is palindrome .\n");
	if(fiba(a))
	printf("The no is fibanocci .\n");
	if(pri(a))
	printf("The no is prime .\n");	
	if(arm(a))
	printf("The no is armstrong .\n");
	if(per(a))
	printf("The no is perfect .\n");
	
	
	return 0;
}
