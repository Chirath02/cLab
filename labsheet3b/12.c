#include<stdio.h>
int main() {
   int age;
   char helth,plce,gnder;
   printf("Enter the age of the person: ");
   scanf("%d",&age);
   printf("Excellent health(y/n)?");
   scanf(" %c",&helth);
   printf("Lives in city(y/n)?");
   scanf(" %c",&plce);
   printf("Gender(m/f)?");
   scanf(" %c",&gnder);
   if((age>=25&&age>=35)&&helth=='y') {
      if(gnder=='m') 
         printf("\nHe Should be insured\npremium rate = 4 per/k\npolicy amount = 2 lakhs\n");
      else 
         printf("\nShe Should be insured\npremium rate = 3 per/k\npolicy amount = 1 lakhs\n");
    }
   else if(helth=='n') 
      printf("\nHe Should be insured\npremium rate = 6 per/k\npolicy amount = 10000\n");
   else 
      printf("\nHe Should not be insured\n");
return 0;
} 
      
       
