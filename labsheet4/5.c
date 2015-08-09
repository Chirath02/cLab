#include<stdio.h>
int main() {
    int a,b;
    char c,ch='y';
    while(ch=='y'||ch=='Y') {
       printf("********* calculator ***********");
       printf("\n\n+ for addition");\
       printf("\n- for substraction");
       printf("\n* for multiplication");
       printf("\n/ for division");
       scanf(" %c",&c);
       printf("Enter two numbers: ");
       scanf("%d%d",&a,&b);
       switch(c) {
          case '+':printf("%d + %d = %d\n",a,b,a+b);
                   break;
          case '-':printf("%d - %d = %d\n",a,b,a-b);
                   break;
          case '*':printf("%d * %d = %d\n",a,b,a*b);
                   break;
          case '/':if(b!=0)
                       printf("%d / %d = %f\n",a,b,(float)a/b);
                   else 
                       printf("second number cannot be 0\n");
                   break;
          default:printf("Wrong option\n");
        }
      printf("Do you want to continue(y/n): ");
      scanf(" %c",&ch);
      }
      return 0;
    }
     

  
