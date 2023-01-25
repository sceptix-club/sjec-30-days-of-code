#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void encipher(char *s) {
    char substitutionTable[26] = {'N','J','A','B','Y','O','F','W','L','Z','M','P','X','I','K','U','V','C','D','E','G','R','Q','S','T','H'};

    // Replace each character in the input string with its corresponding
    // character in the substitution table
    for (int i = 0; s[i]; i++) {
        if (isalpha(s[i])) {
            char original = s[i];
            s[i] = substitutionTable[tolower(s[i]) - 'a'];
            if(isupper(original))
                s[i] = toupper(s[i]);
        }
    }
}

int main() {
    char message[1000];
    printf("Enter the message you want to encipher: ");
    scanf("%[^\n]s", message);
    encipher(message);
    printf("Enciphered message: %s\n", message);
    return 0;
}
