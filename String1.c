//Program of converting lowercase characters to uppercase
#include<stdio.h>
int main() {
    char string[100];
    printf("Enter the string  ");
    gets(string);
    int i;
    printf("The uppercase string is ");
    for (i=0 ; string[i] != '\0'; i++ ) {
        if (string[i] >='a' && string[i] <= 'z'){
            printf("%c", string[i] -32);
        }
        else
            printf("%c",string[i]);
    }
}