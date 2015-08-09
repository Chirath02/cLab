#include<stdio.h>
typedef struct
{
	int x,y;
}point;
void display(int a,int b)
{
	printf("point x=%d, y=%d",a,b);
}
int main()
{
	point p = {12,23};
	display(p.x,p.y);
	return 0;
} 