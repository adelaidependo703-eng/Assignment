#include <stdio.h>

int main() {
    FILE *fp;
    float amount;
    float total = 0.0;
    int saleNumber = 1;

    /* Step 1: Create sales.txt with sample sales in the current folder */
    fp = fopen("sales.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not create sales.txt!\n");
        return 1;
    }
    fprintf(fp, "175.50\n200.00\n55.50\n");
    fclose(fp);

    /* Step 2: Open sales.txt and display each sale */
    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open sales.txt!\n");
        return 1;
    }

    printf("Daily Sales Transactions\n");
    printf("------\n");

    while (fscanf(fp, "%f", &amount) == 1) {
        printf("Sale %d: %.2f\n", saleNumber, amount);
        total += amount;
        saleNumber++;
    }

    fclose(fp);

    printf("-----\n");
    printf("Total Sales: %.2f\n", total);

    return 0;
}