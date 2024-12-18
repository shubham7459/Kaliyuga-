/* My C program for finding the average of numbers
   Author: Shubham */
#include<stdio.h>

int main() {
    int nooftime, num, sum = 0; 
    printf("How many numbers do you want to average?: ");
    scanf("%d", &nooftime); 

    // Validate the input count
    if (nooftime <= 0) {
        printf("Invalid input. Please enter a number greater than 0.\n");
        return 1;
    }

    // Loop to input numbers and calculate the sum
    for (int i = 0; i < nooftime; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num); // Read each number
        sum += num; // Add to sum
    }

    // Calculate average
    float average = sum / (float)nooftime; // Use float division for accuracy

    // Display the result
    printf("The average of the entered numbers is: %.2f\n", average);

    return 0;
}
