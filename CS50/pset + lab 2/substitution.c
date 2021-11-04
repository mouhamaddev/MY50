#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int checkKey();
void substitution();
void func(char position, string key);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        if (strlen(argv[1]) == 26)
        {
            for (int i = 0; i < strlen(argv[1]) ; i++)
            {
                if (!isalpha(argv[1][i])) { printf("Key must contain 26 characters.\n"); return 1; }

                for (int j = i + 1 ; j < strlen(argv[1]) ; j++)
                {
                    if (toupper(argv[1][j]) == toupper(argv[1][i])) { printf("Key must not contain repeated lettersbets.\n"); return 1; }
                }
            }
            // if valid : code here
            substitution(argv[1]);
        }
        else { printf("Key must contain 26 characters.\n"); return 1; }
    }
    else { printf("Usage: ./substitution key\n"); return 1; }

    return 0;
}


void substitution(string key)
{
    //plain text
    string p = get_string("plaintext: ");
    //ask for plain
    printf("ciphertext: ");
    for (int i = 0; i < strlen(p); i++)
    {
        if (isalpha(p[i]))
        {
            char x = p[i];
            if (islower(p[i]))
            {
                func(tolower(x), key);
            }
            else
            {
                func(toupper(x), key);
            }
        }
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
}
void func(char position, string key)
{
    string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < strlen(letters); i++)
    {
        if (islower(position))
        {
            if (position == tolower(letters[i]))  printf("%c", tolower(key[i]));
        }
        else
        {
            if (position == toupper(letters[i])) printf("%c", toupper(key[i]));
        }
    }
}
