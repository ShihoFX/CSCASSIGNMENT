//NAME: MGBEKEN JUSTICE BEJAIMIN
//DEPARTMENT: SOFTWARE ENGINEERING
//MATRIC: CMP2307629
#include <stdio.h>

int main() {
    int arr[5];  // Declare an array of size 5
    int i;

    //This Section Prompts the user for input and read the elements into the array
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    //This Section Print the elements of the array
    printf("The elements of the array are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
