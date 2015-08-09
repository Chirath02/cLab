#include<stdio.h>
struct Book {
	int book_id;
	char book_title[100],author[100];
	float price;
};
void read(struct Book *ptr) {
	printf("Enter book id: ");
	scanf("%d",&ptr->book_id);
	printf("Enter book Title :");
	scanf(" %[^\n]",ptr->book_title);
	printf("Enter Author :");
	scanf(" %[^\n]",ptr->author);
	printf("Enter Price :");
	scanf("%f",&ptr->price);
}
void print(struct Book b) {
	printf("Book id: %d \n",b.book_id);
	printf("Title : %s \nAuthor : %s \n",b.book_title,b.author);
	printf("Price : %f \n",b.price);
}
int main() {
	struct Book b;
	read(&b);
	print(b);
	return 0;
}