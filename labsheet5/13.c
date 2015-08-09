#include<stdio.h>
int main() {
    int selection ,index ,i, element ,nofelements ,intarray[100] ,temp;
    printf("************ Menu ***************");
    printf("\n\nEnter 1 for Inserting an element");
    printf("\nEnter 2 for deleting an element");
    scanf("%d" ,&selection); 
    printf("Enter no of elements in array");
    scanf("%d" ,&nofelements);
    printf("Enter the array elemnts :");
    for(i = 0 ;i <nofelements ; ++i) 
	scanf("%d" ,&intarray[i]);
    printf("The Array is :\n");
    for(i = 0 ;i < nofelements ;++i)
	printf("%d " ,intarray[i]);
    switch(selection) {
	case 1:printf("Enter element a index for enteringelement :");
	       scanf("%d%d" ,&element ,&index);
	       for(i = index ;i < nofelements ;++i) {
		   temp = intarray[i];
	           intarray[i] = intarray[i + 1];
		   intarray[i + 1] = temp;
	       }
	       nofelements++;
	       intarray[index] = element;
	       break;
	case 2:printf("Enter index to delete element :");
	       scanf("%d" ,&index);
	       for(i = index ;i < nofelements ; ++i)
		   intarray[i] = intarray[i + 1];
	       nofelements--;
	       break;
	default:printf("Wrong choice,enter (1-2) only");
    }
    printf("The Array now is :\n");
    for(i = 0 ;i < nofelements ;++i)
	printf("%d " ,intarray[i]);
    return 0;
}
    
	
	       
	      
	       