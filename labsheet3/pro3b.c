#include<stdio.h>
main()  {
int a;
int b;
int c;

printf("Enter Value of a and b :");
scanf("%d%d",&a,&b);

c = a & b;
 printf("Line 1 - Value of c is %d\n",c);
  
c= a |b;
printf("Line 2 - Value of c is %d\n",c);

c = a^b;
printf("Line 3 - Value of c is %d\n",c);

c = a<< 2;
printf("Line 4 - Value of c is %d\n",c); 

c = a >> 2;
printf("Line 6 - Value of c is %d\n",c);


}

