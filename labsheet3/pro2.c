#include<stdio.h>
int main()  {
  int a = 0,b = 1,c = -1;
  float x = 2.5,y= 0.0;
  printf("%d\n",a&&b);
  printf("%d\n",a<b&&c<b); 
  printf("%d\n",b + c||b/c); 
  printf("%d\n",x*5&&5||b/c); 
  printf("%d\n",a<=10&&x>=1&&b); 
  printf("%d\n",!x||!c||b+c);
  printf("%d\n",x*y<a+b||c);    
  printf("%d\n",(x>y)+!a||c++); 
  return 0;
}
