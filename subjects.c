#include <stdio.h>


void entrStudentMarks();
void clearBuffer();

int main() {
    char choice;

    do {
        entrStudentMarks();
        printf("\nDo you want to enter details for another user? (y/n): ");
        scanf(" %c", &choice);
        clearBuffer();
    } while (choice == 'y' || choice == 'Y');

    printf("Program exited.\n");
    return 0;
}

void entrStudentMarks() {
    int marks[5]; // 5 subjects
    int sum = 0;
    float average;

    // user to enter marks for each subject
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    //  average
    average = sum / 5.0;

    //  2 decimal point value
    printf("The average marks are: %.2f\n", average);

}

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}
