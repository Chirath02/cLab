#include<stdio.h>
int main() {
    int i = 2,sumofnos = 0;
    for(;i<=100;i+=3) {
	if(i%5 == 0) 
	    sumofnos += i;
    }
    printf("Sum of numbers divisible by 5 is :%d\n",sumofnos);
    return 0;
}