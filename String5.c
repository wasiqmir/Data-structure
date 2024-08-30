#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);
    int length1 = 0;
    while (str1[length1] != '\0') {
        length1++;
    }
    for (i = length1, j = 0; str2[j] != '\0'; i++, j++) {
        str1[i] = str2[j];
    }
    str1[i] = '\0'; 
    printf("Concatenated string: %s\n", str1);

    return 0;
}
