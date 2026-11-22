#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char title[200];
    char again;

    do {
        printf("Enter book title: ");
        fgets(title, sizeof(title), stdin);

        /* Remove the extra newline */
        title[strcspn(title, "\n")] = '\0';

        /* keeps old records and adds new ones at the end */
        fp = fopen("borrowed_books.txt", "a");

        if (fp == NULL) {
            printf("Error: Could not open borrowed_books.txt\n");
            return 1;
        }

        fprintf(fp, "%s\n", title);
        fclose(fp);

        printf("Success: \"%s\" saved to borrowed_books.txt\n\n", title);

        printf("Add another book? (y/n): ");
        scanf(" %c", &again);

        /* Clear leftover newline before the next fgets() */
        while (getchar() != '\n');

        printf("\n");

    } while (again == 'y' || again == 'Y');

    printf("Done! All records are in borrowed_books.txt\n");
    return 0;
}