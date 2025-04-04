
//Write a program that accepts a string as input, capitalizes the first letter of each word in the  string, and then returns the result string.

#include <stdio.h>
#include <ctype.h>
#define MAX 100

int main() {
    char str[MAX];
    printf("Enter a string ");
    scanf("%[^\n]s", str);

    for (int i = 0; str[i]; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = toupper(str[i]);
            }
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = tolower(str[i]);
        }
    }

    printf("Capitalized string is %s\n", str);

    return 0;
}
