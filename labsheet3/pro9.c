#include<stdio.h>
int main()  {
int a ,sum =0;
printf("Enter a three digit number:");
scanf("%d",&a);
if((a % 5) == 0) {
sum += (a % 10);
a /= 10;
sum += (a % 10);
a /= 10;
sum += (a % 10);
printf("\nSum of three digits = %d\n",sum);
}
else  {
printf("\nLeast significant digit is not 5\n");
}
return 0;
}


