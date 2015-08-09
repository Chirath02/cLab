#include<stdio.h>
int main()  {
int a ,b , c;
float sum,avg;
printf("\nEnter three numbers");
scanf("%d%d%d",&a,&b,&c);
sum = a + b + c ;
avg = sum / 3;
printf("\nSum of three numbers = %f\n",sum);
printf("Average of three numbers = %f\n\n",avg);
if(sum > 200) {
  printf("Sum has exceeded the range\n");
}
else if(sum > 100)  {
  printf("Sum is in the allowed range\n");
}
else {
printf("Sum is below the range\n");
}
return 0;
} 
