
// Write a program that counts the number of vowels in a sentence.

#include <stdio.h>
#include <string.h>

int count_vowels(const char* str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            { count++;}
    }
    return count;
}

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    int vowels = count_vowels(sentence);
    printf("Number of vowels: %d\n", vowels);

    return 0;
}
