#include <stdio.h>

int main(void) {

    int octal = 0177;
    int hex = 0xFFEF0D;
    
    printf("%#o in base 8 is %i\n", octal, octal);
    printf("Whatever the shit %#X is in hex is %i\n", hex, hex);
    return 0;

}