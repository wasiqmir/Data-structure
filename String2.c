//Program to compare two strings
#include<stdio.h>
int main() {
    char string1[20];
    char string2[20];
    printf("Enter the first string :");
    gets(string1);
    printf("Enter the second string  : ");
    gets(string2);
    int i , flag=0;
    for(i=0 ; string1[i] != '\0' || string2[i] !='\0' ; i++ ) {
        if (string1[i] != string2[i]){

            flag = 1;
            break;
        }
        else
            flag= 0;
    }
    if (flag == 0)
        printf("The strings are equal ");
    else
        printf("The strings are not equal ");
}