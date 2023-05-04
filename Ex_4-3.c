#include <stdio.h>

int main() {
    int number, copy, digits = 0, divisor = 1;

    // Input the number
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Count the number of digits in the number
    copy = number;
    while (copy > 0) {
        digits++;
        copy /= 10;
        divisor *= 10;
    }
    divisor /= 10;

    // Display the number in the desired format
    for (int i = 0; i < digits; i++) {
        copy = number;
        for (int j = 0; j < i; j++) {
            copy /= 10;
        }
        while (copy > 0) {
            printf("%d", copy % 10);
            copy /= 10;
        }
        printf("\n");
    }

    return 0;
}

