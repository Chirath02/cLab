#include<stdio.h>
int main()
{
    char a;
    printf("Enter A charecter : ");
    scanf("%c",&a);
    if(a<94)
    a+=32;
    switch(a)
    {
        case 'a' : 
        case 'e' : 
        case 'i' : 
        case 'o' : 
        case 'u' :printf("Is vowel \n");
                  break; 
        default:printf("Not vowel \n");
    }
    
    return 0;
 }

