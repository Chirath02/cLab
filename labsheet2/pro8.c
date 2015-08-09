#include<stdio.h>
#define PI 3.14
main() {
float r,area,perimeter;
printf("Enter the radius ");
scanf("%f",&r);
area = PI * r * r;
perimeter = 2 * PI * r;
printf("\nArea:%f\nPerimeter:%f\n",area,perimeter);
}
