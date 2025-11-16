#include <stdio.h>

typedef struct {
    int book_id;
    char title[100];
    char author[50];
    float price;
} Book;

void printBookDetails(Book b) {
    printf("\nBook Details:\n");
    printf("ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    Book myBook;

    printf("Enter Book ID: ");
    scanf("%d", &myBook.book_id);
    printf("Enter Title: ");
    scanf(" %[^\n]s", myBook.title);
    printf("Enter Author: ");
    scanf(" %[^\n]s", myBook.author);
    printf("Enter Price: ");
    scanf("%f", &myBook.price);

    printBookDetails(myBook);

    return 0;
}
