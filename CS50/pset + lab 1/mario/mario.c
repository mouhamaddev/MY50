#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //int height = get_int("Height: ");

    //check if height is between 1 and 8
    if (height > 0 && height < 9)
    {
        //making new line
        for (int i = 0; i < height; i++)
        {
            //calculating spaces for every line
            for (int space = height - i - 1; space > 0 ; space = space - 1)
            {
                printf(" ");
            }
            //calculating number of blocks for every line
            for (int block = 1; block <= i + 1; block++)
            {
                printf("#");
            }
            //space for second block
            printf("  ");
            //block two
            for (int block2 = 1; block2 <= i + 1; block2++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}