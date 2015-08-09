#include<stdio.h>
#include<math.h>
int main() {
    char c = 'y';
    float n,i=1;
      printf("Enter a number");
      scanf("%f",&n);
      while(i<=n) {
          printf("Square of %f = %f\n",i,i*i);
          printf("Cube of %f = %f\n\n",i,i*i*i);
          i++;
      }
    return 0;
}
    
    
