/*
NAME:CLARENCE NJUGUNA
REG NO:CT101/G/26491/25
DESCRIPTION:PROMPT LIBRARIAN TO ENTER BOOK TITLE AND STORE IN FILE
*/

#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    // Open the file in append mode so existing records are not deleted
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin); // Read book title (can include spaces)

    // Write the title to the file
    fprintf(file, "%s", title);

    fclose(file);

    printf("Book title successfully stored in borrowed_books.txt!\n");

    return 0;
}
