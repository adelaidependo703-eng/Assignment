#include <stdio.h>
#include <string.h>

/* Define the Student structure */
struct Student {
    char name[50];
    char regNo[30];
    float marks;
};

int main() {
    FILE *fp;
    struct Student students[3] = {
        {"Abdul Omondi", "REGs/001/2026", 88},
        {"Brian Murang'a'", "REG/002/2026", 76},
        {"Grace Hassan", "REG/003/2026", 91}
    };
    struct Student s;
    int i;

    /* Write sample student records to results.dat */
    fp = fopen("results.dat", "wb");
    if (fp == NULL) {
        printf("Could not create results.dat!\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        fwrite(&students[i], sizeof(struct Student), 1, fp);
    }
    fclose(fp);

    /* Read from results.dat and display student data */
    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Could not open results.dat!\n");
        return 1;
    }

    printf("Student Examination Results\n");
    printf("----\n");

    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("Name:  %s\n", s.name);
        printf("RegNo: %s\n", s.regNo);
        printf("Marks: %.2f\n", s.marks);
        printf("----\n");
    }

    fclose(fp);
    return 0;
}