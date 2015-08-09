#include<stdio.h>
int main() {
    int sum=0,n=1,i=-1;
    while(n!=0) {
       printf("Enter a number(0 to exit)");
       scanf("%d",&n);
       sum += n;
       i++;
     }
    printf("Sum = %d\n",sum);
    printf("Avg = %d\n",sum/i);
    return 0;
  }

