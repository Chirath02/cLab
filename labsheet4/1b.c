#include<stdio.h>
int main() {
    int sum=0,n=1;
    do {
       printf("Enter a number(0 to exit)");
       scanf("%d",&n);
       sum += n;
     }while(n!=0);
    printf("Sum = %d",sum);
    return 0;
  }

