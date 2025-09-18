#include <stdio.h>

int main() {
    char name[50], section[20];
    int num1, num2;
    float div;

    // Input student details
    printf("Enter Complete Name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter Section: ");
    fgets(section, sizeof(section), stdin);

    // Input numbers
    printf("\nEnter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform division
    div = (float) num1 / num2;

    // Display results
    printf("\n   Student Calculator\n");
    printf("Student name: %s", name);
    printf("Section: %s", section);
    printf("Results:\n");
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %.2f\n", num1, num2, div);

    return 0;
}



