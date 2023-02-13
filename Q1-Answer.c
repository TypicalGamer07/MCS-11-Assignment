#include <stdio.h>

// Function to reverse a number
int reverse_number(int number) {
    int reverse = 0;
    while (number > 0) {
        reverse = reverse * 10 + number % 10; // Add the last digit of the number to reverse
        number /= 10; // Remove the last digit from the number
    }
    return reverse;
}

// Function to check if a number is a palindrome
int is_palindrome(int number) {
    return number == reverse_number(number);
}

// Function to find the sum of all the digits of a number
int sum_of_digits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10; // Add the last digit of the number
        number /= 10; // Remove the last digit from the number
    }
    return sum;
}

int main() {
    int choice, number;
    // Show the menu and repeat until the user chooses to quit
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice); // Read the user's choice
        switch (choice) {
            case 1:
                printf("Enter a 5-digit number: ");
                scanf("%d", &number); // Read the number
                printf("The reverse of the number is: %d\n", reverse_number(number)); // Call the reverse_number function and print the result
                break;
            case 2:
                printf("Enter a 5-digit number: ");
                scanf("%d", &number); // Read the number
                if (is_palindrome(number)) {
                    printf("The number is a palindrome\n");
                } else {
                    printf("The number is not a palindrome\n");
                }
                break;
            case 3:
                printf("Enter a 5-digit number: ");
                scanf("%d", &number); // Read the number
                printf("The sum of all the digits of the number is: %d\n", sum_of_digits(number)); // Call the sum_of_digits function and print the result
                break;
            case 4:
                return 0; // Quit the program
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}
