#include <stdio.h>

/*
    Programmer: Brant Lee
    Date: 11/28/2024
    Purpose: The purpose of this assignment is to demonstrate how to print patterns using loops in C.
    Acknowledgment: I have not cheated in this assignment in any way possible,
    and I agree that I will receive the necessary consequences if I am found to have violated this.
    Thank You
*/

#include <stdio.h>

/*
    Programmer: Your Name
    Date: The current date
    Purpose: The purpose of this assignment is to demonstrate how to print patterns using loops in C.
    Acknowledgment: I have not cheated in this assignment in any way possible,
    and I agree that I will receive the necessary consequences if I am found to have violated this.
    Thank You
*/

int main() {
    // A. Comment
    // 1. Here, we will print a few shapes
    printf("Here, we will print a few shapes.\n\n");

    // B. Comment
    // 1. Diamond
    printf("Diamond:\n");
    printDiamond();
    printf("\n");

    return 0;
}

int main() {
    int n = 10; // Number of rows for the top half of the diamond
    int i, j;

    // Print the top half of the diamond
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("ㅠ \n");
    }

    // Print the bottom half of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}






