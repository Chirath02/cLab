#include<stdio.h>
int main()
{
    int a;
    printf("enter the no (1-7) : ");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1 : printf("Monday");
                 break;
        case 2 : printf("Tuesday");
                 break;
        case 3 : printf("Wednesday");
                 break;
        case 4 : printf("Thrusday");
                 break;
        case 5 : printf("Friday");
                 break;
        case 6 : printf("Saturday");
                 break;
        case 7 : printf("sunday");
                 break;
        default:printf("Number between 1 and 7 only");
    }
    printf("\n");
    return 0;
}

