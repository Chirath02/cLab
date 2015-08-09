#include<stdio.h>
int main()  {
int a ,b;
printf("Enter two numbers");
scanf("%d%d",&a,&b);
a = a + b;
b = a - b;
a = a - b;
printf("\nAfter Swaping without temporary variable");
printf("\na = %d",a);
printf("\nb = %d",b);

int c;
c = a;
a = b;
b = c;
printf("\n\nAfter Swaping with temporary variable");
printf("\na = %d",a);
printf("\nb = %d\n",b);

return 0;
}
