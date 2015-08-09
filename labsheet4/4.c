#include<stdio.h>
int main() {
    int a,b,c,l;
    char ch = 'y';
    while(ch=='y'||ch=='Y') {
      printf("Enter three numbers ");
      scanf("%d%d%d",&a,&b,&c);
      l = (a>b&&a>c)?a:(b>c?b:c);
      printf("Larger number =%d",l);
      printf("\nDo you want to enter again(y/n)");
      scanf(" %c",&ch);
     }
    return 0;
}

