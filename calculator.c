#include <stdio.h>

// Function prototypes
int addition();
int subtraction();
int division();
int multiplication();

int main(){
    printf("Hlo sir, this is a basic calculator\n");
    printf("Which task do you want to do? a(+), s(-), d(/), m(*)\n");
    
    char c;
    // Added space before %c to clear any leftover newline character in the buffer
    scanf(" %c", &c); 
    
    // Compare directly with character literals like 'a', 's', etc.
    if (c == 'a'){
        printf("Acha ji, addition:\n");
        addition(); // Correct way to call the function
    }
    else if (c == 's'){
        printf("Acha ji, subtraction:\n");
        subtraction();
    }
    else if (c == 'd'){
        printf("Acha ji, division:\n");
        division();
    }
    else if (c == 'm'){
        printf("Acha ji, multiplication:\n");
        multiplication();
    }
    else {
        printf("Invalid choice! Please choose a, s, d, or m.\n");
    }

    return 0;
}

int addition(){
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    int sum = x + y;
    printf("Result: %d\n", sum);
    return sum; // Added return since function type is int
}

int subtraction(){
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    int sub = x - y;
    printf("Result: %d\n", sub);
    return sub;
}    

int division(){
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    if (y == 0) {
        printf("Error: Cannot divide by zero!\n");
        return 0;
    }
    int div = x / y;
    printf("Result: %d\n", div);
    return div;
}

int multiplication(){
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    int mult = x * y;
    printf("Result: %d\n", mult);    
    return mult;
}