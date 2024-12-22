#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the newline character, if it exists
    sentence[strcspn(sentence, "\n")] = '\0';

    // Use strtok to tokenize the sentence
    char *word = strtok(sentence, " "); // Split by spaces
    while (word != NULL) {
        printf("%s\n", word); // Print each word on a new line
        word = strtok(NULL, " "); // Get the next word
    }

    return 0;
}
