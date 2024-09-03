#include <stdio.h>
#define DATA_SIZE  1000 

int main() {
    char book[DATA_SIZE];
    FILE *book1 = NULL;

    // Open file for writing
    book1 = fopen("file.txt", "w");
    if (book1 == NULL) {
        printf("Unable to create file\n");
        return 1;
    }

    // Get input from the user
    printf("Enter the data: ");
    // Use fgets to read from stdin
    if (fgets(book, DATA_SIZE, stdin) == NULL) {
        printf("Error reading input\n");
        fclose(book1);
        return 1;
    }

    // Write the input data to the file
    fprintf(book1, "%s", book);

    // Close the file
    fclose(book1);

    return 0;
}
