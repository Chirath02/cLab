#include<stdio.h>
int main() {
   int m,n;
   printf("Enter a Number to print * Table and limit ");
   scanf("%d%d",&m,&n);
   for(int i=0;i<=n;++i) 
     printf("%d * %d = %d\n",m,i,m*i);
   return 0;
 }
