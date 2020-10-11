#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2) // check for command line key
    {
        int n = strlen(argv[1]); // convert key from int to string
        int i = 0;
        for (int l = 0; l < n; l++)
        {
            if (!isdigit(argv[1][l]))
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        int key = atoi(argv[1]); //
        string text = get_string("plaintext: "); // user input
        printf("ciphertext: "); // print cipher text
        int t = strlen(text);
        for (int l = 0; l < t; l++) // For loop iteration
        {
            if (isupper(text[l])) // uppercase input
            {
                printf("%c", (((text[l] - 'A') + key) % 26) + 'A');
            }

            else if (islower(text[l])) // lowercase input
            {
                printf("%c", (((text[l] - 'a') + key) % 26) + 'a');
            }

            else
            {
                printf("%c", text[l]);
            }
        }
    }
    else
    {
        printf("Usage: ./caesar key\n"); // error message
        return 1;
    }
    printf("\n");
    return 0;
}