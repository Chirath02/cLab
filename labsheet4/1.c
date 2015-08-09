#include<stdio.h>
int main() {
    int sum=0,n=1;
    while(n!=0) {
       printf("Enter a number(0 to exit)");
       scanf("%d",&n);
       sum += n;
     }
    printf("Sum = %d",sum);
    return 0;
  }

