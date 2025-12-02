#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "caesar.h"

int main(int argc, char *argv[])
{
    // Check if the user actually gave a key.
    // If not, just bail out with the usage message.
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Make sure the key only contains digits.
    // Could be something like "5" or "123" → but not "abc" or "-2".
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert key string to number and wrap around 26 (just in case).
    int k = atoi(argv[1]) % 26;

    char pt[32767];
    // Asking for input. Using fgets because scanf("%s") would cut at the first space.
    printf("Plaintext: ");
    fgets(pt, sizeof(pt), stdin);

    // Encrypt each character and print as we go.
    // Feels faster than building a new string.
    printf("Ciphertext: ");
    for (int j = 0; j < strlen(pt); j++)
    {
        printf("%c", encrypt_char(pt[j], k));
    }
    return 0;
}
