#include<stdio.h>
#include<math.h>
int main() {
    char c = 'y';
    float n;
    while(c=='y'||c=='Y')  {
      printf("Enter a number");
      scanf("%f",&n);
      if(n>=0)
       printf("Square root of %f = %f\n",n,sqrt(n));
      else 
       printf("Number cannot be naegative");
      return 0;
}
    
    
