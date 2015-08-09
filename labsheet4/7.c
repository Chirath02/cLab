#include<stdio.h>
int main() {
    int m,d=0,t,dt,j,i;
    printf("Enter a number: ");
    scanf("%d",&m);
    t=m;
    while(t!=0) {
       d++;
       t/=10;
    }
    for(i=0;i<d;++i) {
            t = m;
        for(j=(d-i);j>0;--j) {
           dt = t%10;
           t = t/10;
          }
      switch(dt) {
           case 0:printf("zero ");
                  break;
           case 1:printf("one ");
                  break;
           case 2:printf("two ");
                  break;
           case 3:printf("three ");
                  break;
           case 4:printf("four ");
                  break;
           case 5:printf("five ");
                  break;
           case 6:printf("six ");
                  break;
           case 7:printf("seven ");
                  break;
           case 8:printf("eight ");
                  break;
           case 9:printf("nine ");
                  break;
        }
}
printf("\n");
return 0;
}

