#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter three sides of a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b+c)==180) 
       printf("The triangle is valid\n");
    else
       printf("The triangle id not valid");
     
    return 0;
}
