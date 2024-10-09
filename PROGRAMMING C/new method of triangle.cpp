#include <stdio.h>

// This program prints two patterns of stars: 
// 1. A left-aligned triangle of spaces followed by stars
// 2. An increasing number of stars on each line

int main() {
    // Pattern: left-aligned spaces followed by stars
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= 4 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Pattern: increasing number of stars on each line
    for (int i = 1; i <= 3; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
