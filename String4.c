//Program to find if string is palindrome
#include<stdio.h>
int main() {
    char str[100];
    int i, j, flag = 1;
    printf("Enter a string: ");
    scanf("%s", str);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    for (i = 0, j = length - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}