#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0};
    int i;

    scanf("%s", str1);
    scanf("%s", str2);

    // Add frequency of characters of first string
    for (i = 0; str1[i] != '\0'; i++) {
        freq[str1[i] - 'a']++;
    }

    // Subtract frequency of characters of second string
    for (i = 0; str2[i] != '\0'; i++) {
        freq[str2[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}