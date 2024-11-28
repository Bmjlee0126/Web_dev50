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


void printDiamond() {
    int n = 7; // Half the height of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
}

void printEmptyDiamond() {
    int n = 7; // Half the height of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) printf(" ");
        printf("*");
        if (i > 1) {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++) printf(" ");
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) printf(" ");
        printf("*");
        if (i > 1) {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++) printf(" ");
            printf("*");
        }
        printf("\n");
    }
}

void printFourDiamonds() {
    int n = 7; // Half the height of the diamond
    for (int i = 1; i <= n; i++) {
        for (int k = 0; k < 4; k++) {
            for (int j = i; j < n; j++) printf(" ");
            for (int j = 1; j <= 2 * i - 1; j++) printf("*");
            printf("   "); // Space between diamonds
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int k = 0; k < 4; k++) {
            for (int j = n; j > i; j--) printf(" ");
            for (int j = 1; j <= 2 * i - 1; j++) printf("*");
            printf("   "); // Space between diamonds
        }
        printf("\n");
    }
}

void printHeart() {
    int n = 6; // Adjust size of the heart
    for (int i = n / 2; i <= n; i += 2) {
        for (int j = 1; j < n - i; j += 2) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++) printf(" ");
        for (int j = 1; j <= (i * 2) - 1; j++) printf("*");
        printf("\n");
    }
}

int main() {
    printf("Diamond:\n");
    printDiamond();
    printf("\n");

    printf("Empty Diamonds (Two Times):\n");
    printEmptyDiamond();
    printf("\n");

    printf("Diamonds (Four Times):\n");
    printFourDiamonds();
    printf("\n");

    printf("Heart:\n");
    printHeart();
    printf("\n");

    return 0;
}


void printDiamond() {
    int n = 7; // Half the height of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
}

void printEmptyDiamond() {
    int n = 7; // Half the height of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) printf(" ");
        printf("*");
        if (i > 1) {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++) printf(" ");
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) printf(" ");
        printf("*");
        if (i > 1) {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++) printf(" ");
            printf("*");
        }
        printf("\n");
    }
}

void printFourDiamonds() {
    int n = 7; // Half the height of the diamond
    for (int i = 1; i <= n; i++) {
        for (int k = 0; k < 4; k++) {
            for (int j = i; j < n; j++) printf(" ");
            for (int j = 1; j <= 2 * i - 1; j++) printf("*");
            printf("   "); // Space between diamonds
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int k = 0; k < 4; k++) {
            for (int j = n; j > i; j--) printf(" ");
            for (int j = 1; j <= 2 * i - 1; j++) printf("*");
            printf("   "); // Space between diamonds
        }
        printf("\n");
    }
}

void printHeart() {
    int n = 6; // Adjust size of the heart
    for (int i = n / 2; i <= n; i += 2) {
        for (int j = 1; j < n - i; j += 2) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++) printf(" ");
        for (int j = 1; j <= (i * 2) - 1; j++) printf("*");
        printf("\n");
    }
}

int main() {
    // Print a few shapes
    printf("Diamond:\n");
    printDiamond();
    printf("\n");

    // Print two empty diamonds
    printf("Empty Diamonds (Two Times):\n");
    printEmptyDiamond();
    printf("\n");

    // Print four diamonds
    printf("Diamonds (Four Times):\n");
    printFourDiamonds();
    printf("\n");

    // Print heart
    printf("Heart:\n");
    printHeart();
    printf("\n");

    return 0;
}





