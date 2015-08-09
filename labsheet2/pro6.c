#include<stdio.h>
main() {
float F,C;
printf("Enter Temperature in Fahrenheit ");
scanf("%f",&F);
C = 5 * (F - 32) / 9;
printf("Temperture in Celsius:%f\n",C);
}
