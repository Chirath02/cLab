#include<stdio.h>
typedef struct
{
	int x,y;
} point;
void display(point p)
{
	printf("point x=%d,y=%d",p.x,p.y);
}
int main()
{
	point p = {12,23};
	display(p);
	return 0;
} 