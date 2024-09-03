#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char title[100];  // Increased size to hold longer strings
    char author[100]; // Increased size to hold longer strings
    int year;
} Book;

void addBook(Book *book, int i);

int main(int argc, char *argv[]) {
    int number_of_books;
    
    printf("Enter the number of books you want to add: ");
    if (scanf("%d", &number_of_books) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    Book *books = (Book *)calloc(number_of_books, sizeof(Book));
    if (books == NULL) {
        printf("Memory allocation failed for books\n");
        return 1;
    }

    for (int i = 0; i < number_of_books; i++) {
        addBook(&books[i], i);
    }

    for (int i = 0; i < number_of_books; i++) {
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);
        printf("\n");
    }

    free(books); // Don't forget to free the allocated memory
    return 0;
}

void addBook(Book *book, int i) {
    snprintf(book->title, sizeof(book->title), "Book %d", i); // Use snprintf to safely format strings
    snprintf(book->author, sizeof(book->author), "Author %d", i);
    book->year = 2000 + i; // Example year; modify as needed
}
