#include<stdio.h>
#include<math.h>
int main() {
    int i,j,num,temp,numrev=0,digits;
    printf("Enter a Number ");
    scanf("%d",&num);
    temp = num;
    while(temp!=0) {
	temp /= 10;
	digits++;
    }
    temp = num;
    for(i=digits-1;i>=0;--i) {
	numrev += (temp%10)*pow(10,i); 
	temp /= 10;
    }
    if(numrev==num)
	printf("Is palindrome\n");
    else
	printf("Not a palindrome\n");
   return 0;
}