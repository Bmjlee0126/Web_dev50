#include <stdio.h>

/*
    Programmer: Brant Lee
    Date: 11/28/2024
    Purpose: The purpose of this assignment is to demonstrate how to print patterns using loops in C.
    Acknowledgment: I have not cheated in this assignment in any way possible,
    and I agree that I will receive the necessary consequences if I am found to have violated this.
    Thank You
*/


void printDiamond() {
    int n = 8; // Number of rows for the top half of the diamond
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
        printf("\n");
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

}



void printEmptyDiamond(){
    int n = 8;

    // top
    for (int i=0; i<n; i++){
        // left space
        for (int j =0;j<n-i-1; j++){
            printf(" ");
        }
        // diamond rim
        for (int j=0; j< 2*i+1; j++){
            // space -> edge
            if(j==0||j==2*i){
                printf("*");
            }
            // space
            else{
                printf(" ");
            }
        }
        // space between diamonds
        for (int j =0;j<2*(n-i); j++){
            printf(" ");
        }
        // The 2nd diamond border
        for(int j =0;j<2*i+1; j++){
            // space -> edge
            if(j==0||j==2*i){
                printf("*");
            }
            // space
            else{
                printf(" ");
            }

        }
        printf("\n");
    }
    // below
    for (int i = n - 2; i >= 0; i--) {
        // Print spaces
        for (int j = 1; j <= n - i -1; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 0; j <= 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // space between diamonds
        for (int j =0;j<2*(n-i)-1; j++){
            printf(" ");
        }
        // The 2nd diamond border
        for(int j =0;j<2*i+1; j++){
            // space -> edge
            if(j==0||j==2*i){
                printf("*");
            }
            // space
            else{
                printf(" ");
            }
        }
        printf("\n");

    }

}

void printFourDiamonds(){
    int n = 8;

    // top
    for (int i=0; i<n; i++){
        // left space
        for (int j =0;j<n-i-1; j++){
            printf(" ");
        }
        //
        for(int j =0;j< 2*i+1; j++){
            printf("*");
        }
        // space between diamonds
        for (int j =0;j<2*(n-i); j++){
            printf(" ");
        }
        // The 2nd diamond border
        for(int j =0;j< 2*i+1; j++){
            printf("*");

        }
        // space between diamonds
        for (int j =0;j<2*(n-i); j++){
            printf(" ");
        }
        // The 3rd diamond border
        for(int j =0;j<2*i+1; j++){
            printf("*");

        }
        // space between diamonds
        for (int j =0;j<2*(n-i); j++){
            printf(" ");
        }
        // The 4th diamond border
        for(int j =0;j<2*i+1; j++){
            printf("*");
        }



        printf("\n");
    }

    // below
    for (int i = n - 2; i >= 0; i--) {
        // Print spaces
        for (int j = 1; j <= n - i -1; j++) {
            printf(" ");
        }
        // Print stars
        for(int j =0;j<2*i+1; j++){
            printf("*");
        }
        // space between diamonds
        for (int j =0;j<2*(n-i)-1; j++){
            printf(" ");
        }
        // The 2nd diamond border
        for(int j =0;j<2*i+1; j++){
            printf("*");
        }


        // space between diamonds
        for (int j =0;j<2*(n-i); j++){
            printf(" ");
        }
        // The 3rd diamond border
        for(int j =0;j<2*i+1; j++){
            printf("*");
        }
        // space between diamonds
        for (int j =0;j<2*(n-i); j++){
            printf(" ");
        }
        // The 4th diamond border
        for(int j =0;j<2*i+1; j++){
            printf("*");
        }
        printf("\n");


    }






}

void printHeart() {
    int n = 8;  // Heart Size Adjustment Variables

    // the 2 san section
    for (int i = 0; i < n; i++) {
        // left space
        for (int j = 0; j < n -1 - i; j++) {
            printf(" ");
        }
        // left san
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        // middle space
        for (int j = 0; j <2*(n-i); j++) {
            printf(" ");
        }
        // right san
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // The body part of the heart (a shape that shrinks from top to bottom)
    int max_stars = 4 * n - 2;
    for (int stars = max_stars; stars >= 2; stars -= 2) {
        // Front blank output (blank for center alignment)
        printf(" ");
        for (int j = 0; j < (max_stars - stars) / 2; j++) {
            printf(" ");
        }
        // print star
        for (int j = 0; j < stars; j++) {
            printf("*");
        }
        printf("\n");
    }

}


int main(){
    // A. Comment
    // 1. Here, we will print a few shapes
    // B. Comment
    // 1. Diamond
    printDiamond();
    printf("\n\n");

    //empty diamond (two times)
    printEmptyDiamond();
    printf("\n\n");

    printFourDiamonds();
    printf("\n\n");

    printHeart();
    printf("\n\n");


    return 0;
}
