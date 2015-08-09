#include<stdio.h>
int main()
{
	struct
	{
		int roll;
		char name[10];
	}s1[10];
	int i;
	printf("enter the details");
	for(i=0;i<3;i++)
	{
		printf("roll?"); 
		scanf("%d",&s1[i].roll);
		printf("name?");
		scanf("%s",s1[i].name);
	}
	printf("entered details");
	for(i=0;i<3;i++)
	{
		printf("roll");
		printf("%d",s1[i].roll);
		printf("name");
		printf("%s",s1[i].name);
	}
} 