//NAME: MGBEKEN JUSTICE BENJAMIN
//DEPARTMENT: SOFTWARE ENGINEERING
//MATRIC: CMP2307629
#include <stdio.h>

int main() {
    int number;

    //This Section Prompts the user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    //This Section Checks if the number is even or odd
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
