#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

    int start_size;
    int end_size;
    int calculation;
    int years = 0;


    // TODO: Prompt for start size

    do
    {
        start_size = get_int("Start size:: ");
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    do
    {
        end_size = get_int("End size:: ");
    }
    while (end_size < start_size);




    // TODO: Calculate number of years until we reach threshold

    if (start_size == end_size)
    {
        printf("Years: 0");
    }

    else
    {
        do
        {
            start_size = round(start_size + (start_size / 3) - (start_size / 4));
            years++;

        }
        while (start_size < end_size);
        //print years
        printf("Years: %i",  years);
    }


}