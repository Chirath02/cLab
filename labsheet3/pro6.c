#include<stdio.h>
int main()  {
int a,sum;
printf("\nEnter a three digit number");
scanf("%d",&a);
sum += (a % 10);
a /= 10;
sum += (a % 10);
a /= 10;
sum += (a % 10);
printf("\nSum of three digits = %d\n",sum);
return 0;
} 
