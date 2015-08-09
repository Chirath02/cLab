#include<stdio.h> 
int main() {
    int i=2,sum = 0;
    while(i<100) {
      sum += i;
      i += 3;
     }
    printf("Sum using while = %d\n",sum);
   i =2;sum =0;
   do {
     sum += i;
      i += 3;
     }while(i<100);
   printf("Sum using do while = %d\n",sum);
  return 0;
}
