/* C program for finding the greatest number
   Author name: Shubham */
#include<stdio.h>

int main() {
    int num, nooftime, greatest;

    printf("Enter the number of times you want to enter a number: ");
    scanf("%d", &nooftime);

    // Validate the number of inputs
    if (nooftime <= 0) {
        printf("Invalid input! Please enter a number greater than 0.\n");
        return 1;
    }

    printf("Enter number 1: ");
    scanf("%d", &greatest); // Initialize 'greatest' with the first number

    for (int i = 1; i < nooftime; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num > greatest) {
            greatest = num; // Update greatest if current number is larger
        }
    }

    printf("The greatest number is: %d\n", greatest);

    return 0;
}
