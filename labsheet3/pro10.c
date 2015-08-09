#include<stdio.h>
int main()  {
int a;
printf("Enter the marks");
scanf("%d",&a);
if((a>=95)&&(a<=100)) {
 printf("\nGrade : A+\nNumber of Conditions executed:1\n");
}
else if(a>=90) {
 printf("\nGrade : A\nNumber of Conditions executed:2");
}
else if(a>=80) {
 printf("\nGrade : A-\nNumber of Conditions executed:3");
}
else if(a>=75) {
 printf("\nGrade : B\nNumber of Conditions executed:4");
}
else if(a>=70) {
 printf("\nGrade : B-\nNumber of Conditions executed:5");
}
else if(a>=60) {
 printf("\nGrade : C\nNumber of Conditions executed:6");
}
else if(a>=50) {
 printf("\nGrade : C-\nNumber of Conditions executed:7");
}
else if(a>=40) {
 printf("\nGrade : D\nNumber of Conditions executed:8");
}
else {
 printf("\nGrade : F\nNumber of Conditions executed:9");
}

return 0;
}
