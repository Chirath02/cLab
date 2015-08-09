#include<stdio.h>
int main() {
    int a,b;
    char c;
    printf("------------- Menu --------------\n\n");
    printf("A for Addition\n");
    printf("S for substraction\n");
    printf("M for multiplication\n");
    printf("D for division\n\n");
    printf("Enter your choice:");
    scanf("%c",&c);
    printf("Enter two nubers:");
    scanf("%d%d",&a,&b);
    switch(c) {
       case 'A':printf("Sum =%d\n",a+b);
                printf("hello");
                break;
       case 'S':printf("Reminder =%d\n",a-b);
                printf("hello");
                break;
       case 'M':printf("Product =%d\n",a*b);
                printf("hello");
                break;
       case 'D':if(b!=0) {
                printf("Quotient =%d\n",a/b);
                printf("hello");
                }
                else
                printf("second number cannot be zero\n");
                break; 
       default:printf("Invalid choice\n");      
                 
           }
       return 0;
}

