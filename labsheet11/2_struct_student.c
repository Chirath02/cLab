#include<stdio.h>
struct student {
	int roll_no;
	char name[100];
	float average_marks;
};
typedef struct student Stud;
void read(Stud *p) {
	scanf("%d",&p->roll_no);
	scanf("%s",p->name);
	scanf("%f",&p->average_marks);
}
void print(Stud *p) {
	printf("\n\n%d",p->roll_no);
	printf("\n%s",p->name);
	printf("\n%f",p->average_marks);
}
main() {
	Stud s;
	printf("Enter Student details\n");
	read(&s);
	print(&s);
}