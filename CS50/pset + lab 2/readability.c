#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int compute_score(string word);

int main(void)
{
    // Get input text from user
    string text1 = get_string("Text : ");

    // Score
    int score1 = compute_score(text1);

    // Print
    if (score1 < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (score1 > 0 && score1 < 16)
    {
        printf("Grade %i\n", score1);
    }
    else if (score1 > 15)
    {
        printf("Grade 16+\n");
    }
}
//function for calculation
int compute_score(string text)
{
    int letters = 0;
    int words = 0;
    int sentences = 0;
    //check all characters
    for (int x = 0; x < strlen(text); x++)
    {
        char Chartext = text[x];
        if (isalpha(Chartext) != 0)
        {
            letters++;
        }
        if (Chartext == ' ')
        {
            words++;
        }
        if (Chartext == '.' || Chartext == '!' || Chartext == '?')
        {
            sentences++;
        }
    }
    words++;
    //calculation
    float L = ((float)letters / (float)words) * 100;
    float s = ((float)sentences / (float)words) * 100;
    float something = 0.0588 * L - 0.296 * s - 15.8;
    int index = round(something);
    return index;
}