#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int ASCII[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");


    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner

    if (score1 > score2)
    {
        printf("%s", "Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("%s", "Player 2 wins!\n");
    }
    else if (score1 == score2)
    {
        printf("%s", "Tie!\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int score = 0;

    for (int i = 0; i < strlen(word); ++i)
    {
        //printf("%c\n", str[i]);

        int x = word[i];

        if (x > 64 && x < 91)
        {
            x = x + 32;
        }

        for (int j = 0; j < 26; ++j)
        {
            //printf("%c\n", str[i]);

            if (x == ASCII[j])
            {
                //printf("%c\n", POINTS[y]);

                //printf("%i\n", POINTS[y]);

                int y = POINTS[j];

                score = score + y;

                //printf("%i\n", score);
            }

            //printf("%i\n", j);
        }


        //printf("%i\n", x);

        //printf("The ASCII value of %c is %d \n", c, c);

    }

    return score;
} 