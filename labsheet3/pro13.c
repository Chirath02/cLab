#include<stdio.h>
int main()
{
    char a;
    float c,b,sum = 0;
    printf("Enter two operators : ");
    scanf("%f%f",&b,&c);
    printf("enter the operator(+,-,*,%) : ");
    scanf("%c",&a);
    
    switch(a)
    {
    case '+' :sum=b+c;
              break;
    case '-' :sum=b-c;
              break;
    case '*' :sum=b*c;
              break;
    case '%' :sum=b%c;
              break;
    default : printf("Sorry,Wrong operator \n");
              return 0;
    }
    printf("The value is : %f\n",sum);
    return 0;
    }

