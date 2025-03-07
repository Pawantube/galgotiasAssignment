#include <stdio.h>

int main() {
    char name[50];
    int age;

    // Print a message
    printf("Hello, World!\n");

    // Take user input
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Print user details
    printf("Hello, %s! You are %d years old.\n", name, age);

    return 0;
}
