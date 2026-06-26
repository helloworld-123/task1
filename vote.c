#include<stdio.h>

int main(){
    int age;
    
    do {
        printf("Mention your age for verification: \n");
        scanf("%d", &age);
        
        if (age < 18) {
            printf("You are not eligible to vote. Please try again.\n\n");
        }
        
    } while (age < 18); // Jab tak age 18 se kam hai, loop chalta rahega

    // Jab user 18 ya usse bada input dega, loop khatam ho jayega aur yeh line chalegi
    printf("You are eligible to vote!\n");
    
    return 0;
}