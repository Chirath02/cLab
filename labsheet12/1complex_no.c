#include<stdio.h>
typedef struct  {
	int a;
	int b;
}com;
void read(com *c) {
	printf("Enter a and b");
	scanf("%d%d",&c->a,&c->b);
}
void display(com c) {
	printf("The complex no is %d i%d",c.a,c.b);
}
void add(com c1,com c2) {
	printf("%d i%d + %d i%d = %d i%d",c1.a,c1.b,c2.a,c2.b,c1.a+c2.a,c1.b+c2.b);
}
void sub(com c1,com c2) {
	printf("%d i%d - %d i%d = %d i%d",c1.a,c1.b,c2.a,c2.b,c1.a+c2.a,c1.b+c2.b);
}
main() {
	com a,b,*c1,*c2;
	c1 = &a; c2 = &b;
	printf("Enter 2 complex numbers\n");
	read(c1);
	read(c2);
	display(a);
	display(b);
	add(a,b);
	sub(a,b);
}