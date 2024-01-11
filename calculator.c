#include<stdio.h>

int main() {
    int a, b, sum, sub, mul;
    char c ;
    float div;


    while(1) {

    printf("Enter the first digit:");
    scanf("%d", &a);
    printf("Enter the second digit:");
    scanf("%d", &b);

    printf("Enter the operator:");
    scanf(" %c", &c); 

    if (c == '+') {
        sum = a + b;
        printf("Result: %d\n", sum);
    } else if (c == '-') {
        sub = a - b;
        printf("Result: %d\n", sub);
    } else if (c == '*') {
        mul = a * b;
        printf("Result: %d\n", mul);
    } else if (c == '/') {
        
        if (b != 0) {
            div = a / b;
            printf("Result: %f\n", div);
        } else {
            printf("Error **division by zero**\n");
        }
    } else {
        printf("Error **input a valid value**\n");
    }

    }

    return 0;
}