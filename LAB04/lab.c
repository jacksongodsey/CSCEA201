#include <stdio.h>
#include <string.h>

int main(void) {
    char word1[9], word2[9];
    int total = 0;
    int total2 = 0;
    int temp;

    printf("Enter word 1:\n");
    scanf("%s", word1);
    printf("Enter word 2:\n");
    scanf("%s", word2);

    int length1 = strlen(word1);
    int length2 = strlen(word2);

    for (int i = 0; i <= length1; i++) {
        temp = 0;
        temp = (int) word1[i];
        total += temp;
    }
    for (int i = 0; i <= length2; i++) {
        temp = 0;
        temp = (int) word2[i];
        total2 += temp;
    }

    if (total == total2) {
        printf("anagrams!\n");
    } else {
        printf("not anagrams\n");
    }


}
