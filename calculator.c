#include <stdio.h>

// Function prototypes
int addition();
int subtraction();
int division();
int multiplication();

int main(){
    // Shuruat mein 'c' ko koi random character de diya (jaise 'x') 
    // taki loop pehli baar chal sake
    char c = 'x'; 
    
    // Loop tab tak chalega jab tak user 'e' (exit) nahi dabata
    while(c != 'e'){
        
        printf("\nHlo sir, this is a basic calculator\n");
        printf("Which task do you want to do? a(+), s(-), d(/), m(*), e(exit)\n");
        printf("Enter your choice: ");
        
        // Space before %c is important to clear the input buffer
        scanf(" %c", &c); 
        
        // Agar user ne 'e' dabaya hai, toh loop se bahar nikal jao
        if (c == 'e') {
            printf("Exiting... Thank you for using the calculator!\n");
            break; 
        }
        else if (c == 'a'){
            printf("Acha ji, addition:\n");
            addition(); 
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
            printf("Invalid choice! Please choose a, s, d, m, or e.\n");
        }
    } // While loop yahan khatam hota hai

    return 0; // Main function ka return loop ke bahar aayega
}

int addition(){
    int x, y;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    int sum = x + y;
    printf("Result: %d\n", sum);
    return sum; 
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