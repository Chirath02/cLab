#include<stdio.h>
struct customer {
	int acc_no;
	char name[100];
	float balance;
}cst[200];
void bal_lessthan_100(int n) {
	int i,flag = 1;
	for(i=0;i<n;++i) {
		if(cst[i].balance<100) {
			printf("\nName : %s",cst[i].name);
			printf("\nAccount number : %d\n",cst[i].acc_no);
			flag = 0;
		}
	}
	if(flag)
		printf("\nNo customer found with balance less than 100\n");
}
void transcation(int acc_no,int amount,int code) {
	if(code) {
		if(amount>cst[acc_no].balance)
			printf("The balance is insufficient for the specified withdrawal");
		else {
			cst[acc_no].balance -= amount;
			printf("\nThe Total balnce of Acount no %d is %f\n",acc_no,cst[acc_no].balance);
		}
	}
	else {
		cst[acc_no].balance += amount;
		printf("\nThe Total balnce of Acount no %d is %f\n",acc_no,cst[acc_no].balance);
	}
}
main() {
	int n,i,acno,amount,code;
	char ch;
	printf("Enter number of customers");
	scanf("%d",&n);
	printf("\nEnter customer details:\n");
	for(i=0;i<n;++i) {
		printf("Enter Account No,Name and balance");
		scanf("%d%s%f",&cst[i].acc_no,&cst[i].name,&cst[i].balance);
	}
	bal_lessthan_100(n);
	printf("\nWant to withdraw or deposit(y/n)?\n");
	scanf(" %c",&ch);
	while(ch=='y'||ch=='Y') {
		printf("Enter Account number, Amount and code[1(deposit)/0(withdraw)]");
		scanf("%d",&acno);
		scanf("%f",&amount);
		scanf("%d",&code);
		transcation(acno,amount,code);
		printf("Enter another(y/n)?");
		scanf(" %c",&ch);
	}
}