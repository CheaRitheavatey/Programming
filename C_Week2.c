#include <stdio.h>

int main()
{
    unsigned char a = 'A';
    printf("%C\n",a);
    printf("%u\n",a); // print out ascii of
    // ..........................
    
    char ch;
    
    printf("enter char (press enter to finish): \n");
    while ((ch = getchar()) != '\n') {
        printf("%C",ch);
    }
    printf("\neneter detected, finish");
    
    //.............................
    
    char input[100]; // array
    printf("enter string: ");
    scanf("%99s", input); // 99s mean its max length
    printf("you enter: %s\n", input);
    
    
    // putchar prints one character whereas printf can print a lot more
    // when theres an overflow in char 255 is the max. and when we put 256 it will loop back to number 1,2,3...

}
