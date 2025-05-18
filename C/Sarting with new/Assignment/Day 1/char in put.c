#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade: ");
    scanf(" %c", &grade);  // Note the space before %c to consume any leftover newline character

    printf("Your grade is: %c\n", grade);

    return 0;
}
