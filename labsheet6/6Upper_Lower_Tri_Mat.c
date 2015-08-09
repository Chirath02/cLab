#include<stdio.h>
main()
{
	int a[100][100],b[100][100],i=0,j,m,n;
	printf("Enter the no of rows and columns : ");
	scanf("%d%d",&m,&n);
	printf("Enter the nos in sucession for arry  :\n");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	
	printf("The upper trinangular matrix is :\n");
	for(i=0;i<m;i++)
	{	
		
		for(j=0;j<n;j++)
		{	
			if(i<=j)
			printf("%d ",a[i][j]);
			else
			printf("  ");	
		}
		printf("\n");
	}
	printf("The lower trinangular matrix is :\n");
	for(i=0;i<m;i++)
	{	
		
		for(j=0;j<n;j++)
		{	
			if(i>=j)
			printf("%d ",a[i][j]);
			else
			printf("  ");	
		}
		printf("\n");
	}
	printf("The diagonal of the matrix is :\n");
	for(i=0;i<m;i++)
	{	
		
		for(j=0;j<n;j++)
		{	
			if(i==j)
			printf("%d ",a[i][j]);
			else
			printf("  ");	
		}
		printf("\n");
	}
	}
