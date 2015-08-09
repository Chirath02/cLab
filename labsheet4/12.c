#include<stdio.h>
int main() {
    int i ,nofintegers ,sumofnos = 0;
    printf("Enter no of integers ");
    scanf("%d",&nofintegers);
        for(i = 1; i<=nofintegers ;i += 2) {
	sumofnos += i;
    }
    printf("Sum:%d\n",sumofnos);
    return 0;
}