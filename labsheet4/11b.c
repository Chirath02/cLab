#include<stdio.h>
int main() {
    int i = 2,sumofnos = 0;
    for(;i<=100;i+=3) {
	(i%5 == 0)?sumofnos += i:0;
    }
    printf("Sum of numbers divisible by 5 is :%d\n",sumofnos);
    return 0;
}