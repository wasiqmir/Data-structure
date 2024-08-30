//Program to reverse the string
#include<stdio.h>
int main() {
    int size , i;
    printf("Enter the size of string:");
    scanf("%d", &size);
    char string[size];
    printf("Enter the string : ");
    scanf("%s", string);
    printf("The reversed string is : ");
    for (i=size ; i>=0 ; i--) {
        printf("%c",string[i]);
    }

}