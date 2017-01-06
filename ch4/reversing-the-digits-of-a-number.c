/*
To get the right most integer, modulus it by 10 then divide by 10 and repeat
1234 % 10 = 4
123 % 10 = 3
12 % 10 = 2
1 % 10 = 1
*/



#include <stdio.h>

int main (void) 
{
    int number, right_digit;
    
    printf("Enter your number:\n");
    scanf("%i", &number);
    
    // while (number != 0) {
    //     right_digit = number % 10;
    //     printf("%i", right_digit);
    //     number = number / 10;
    // }
    
    do {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    } while (number != 0);
    
    printf("\n");
    
    return 0;
}