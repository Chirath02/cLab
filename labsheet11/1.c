 #include<stdio.h>
 int main()
 {
	 struct date
	 {
		 int dd,mm,yy;
	 };
	 struct stud
	 {
		 int roll;
		 char name[10];
		 struct date d1;
	 } ;
	 struct stud s1 = {100,"abc",1,2,3};
	 struct stud s2;
	 s2 = s1;
	 printf("%d"touch ,s1.roll);
	 printf("%s",s1.name);
	 printf("%d",s1.d1.dd);
	 printf("%d",s1.d1.mm);
	 printf("%d",s1.d1.yy);
 } 