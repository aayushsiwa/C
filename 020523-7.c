//wap to print the first word of a sentence.
#include <stdio.h>
int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    gets(sentence);
    
    printf("The first word is: ");
    
    // Loop through each character in the sentence
    for(int i=0; sentence[i]!='\0'; i++) {
        // If a space or tab is found, print the word and break out of the loop
        if(sentence[i]==' ' || sentence[i]=='\t') {
            printf("\n");
            break;
        }
        // Otherwise, print the character
        printf("%c", sentence[i]);
    }
    
    return 0;
}
