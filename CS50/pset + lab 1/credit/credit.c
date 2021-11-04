#include <cs50.h>
#include <stdio.h>
#include <math.h>


int getSum(int n)
{
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
    }


int main(void)
{
    //American Express 15 digits, starts with : 34/37
    //MasterrCard 16 digits, starts with : 51/52/53/54/55
    //Visa 13/16 digits, starts with : 16/4


    long long cardNumber  = get_long("Number: \n");
    long long checkLong  = cardNumber;

    //----------------------------------------------------------------------

    int numberOfDigits = 0;

    while (checkLong != 0) {
        checkLong /= 10;
        ++numberOfDigits;
    }
    //printf("Number of digits: %i\n", numberOfDigits);

    //----------------------------------------------------------------------

    int digit16 = (cardNumber / 1000000000000000) % 10;
    int digit15 = (cardNumber / 100000000000000) % 10;
    int digit14 = (cardNumber / 10000000000000) % 10;
    int digit13 = (cardNumber / 1000000000000) % 10;
    int digit12 = (cardNumber / 100000000000) % 10;
    int digit11 = (cardNumber / 10000000000) % 10;
    int digit10 = (cardNumber / 1000000000) % 10;
    int digit9 = (cardNumber / 100000000) % 10;
    int digit8 = (cardNumber / 10000000) % 10;
    int digit7 = (cardNumber / 1000000) % 10;
    int digit6 = (cardNumber / 100000) % 10;
    int digit5 = (cardNumber / 10000) % 10;
    int digit4 = (cardNumber / 1000) % 10;
    int digit3 = (cardNumber / 100) % 10;
    int digit2 = (cardNumber / 10) % 10;
    int digit1 = (cardNumber / 1) % 10;

    //----------------------------------------------------------------------


    int newdigit16 = digit16 * 2;
    int newdigit15 = digit15;
    int newdigit14 = digit14 * 2;
    int newdigit13 = digit13;
    int newdigit12 = digit12 * 2;
    int newdigit11 = digit11;
    int newdigit10 = digit10 * 2;
    int newdigit9 = digit9;
    int newdigit8 = digit8 * 2;
    int newdigit7 = digit7;
    int newdigit6 = digit6 * 2;
    int newdigit5 = digit5;
    int newdigit4 = digit4 * 2;
    int newdigit3 = digit3;
    int newdigit2 = digit2 * 2;
    int newdigit1 = digit1;

    int sumOfDigitsMultipliedByTwo = getSum(newdigit16) + getSum(newdigit14) + getSum(newdigit12) + getSum(newdigit10) + getSum(newdigit8) + getSum(newdigit6) + getSum(newdigit4) + getSum(newdigit2);
    int sumOfDigitsNotMultiplied = newdigit15 + newdigit13 + newdigit11 + newdigit9 + newdigit7 + newdigit5 + newdigit3 + newdigit1;

    int finalNumber = sumOfDigitsMultipliedByTwo + sumOfDigitsNotMultiplied;


    //printf("%i\n", finalNumber);

    //printf("%i\n", sumOfDigitsMultipliedByTwo);
    //printf("%i\n", sumOfDigitsNotMultiplied);

    int lastDigitOfFinal = (finalNumber / 1) % 10;

    bool isValid = false;
    if ( lastDigitOfFinal == 0) {isValid = true;}
    //printf("%i\n", isValid);

    //----------------------------------------------------------------------




    if( numberOfDigits == 15 && isValid)
    {

        if( digit15 == 3 && digit14 == 7 )
        {
            printf("AMEX\n");
        }

        else if( digit15 == 3 && digit14 == 4 )
        {
            printf("AMEX\n");
        }

        else printf("INVALID\n");

    }

    else if( numberOfDigits == 16 && isValid)
    {

        if( digit16 == 5 && digit15 == 1 )
        {
            printf("MASTERCARD\n");
        }

        else if( digit16 == 5 && digit15 == 2 )
        {
            printf("MASTERCARD\n");
        }

        else if( digit16 == 5 && digit15 == 3 )
        {
            printf("MASTERCARD\n");
        }

        else if( digit16 == 5 && digit15 == 4 )
        {
            printf("MASTERCARD\n");
        }

        else if( digit16 == 5 && digit15 == 5 )
        {
            printf("MASTERCARD\n");
        }

        else if( digit16 == 1 && digit15 == 6 )
        {
            printf("VISA\n");
        }

        else if( digit16 == 4 )
        {
            printf("VISA\n");
        }

        else printf("INVALID\n");
    }

    else if( numberOfDigits == 13 && isValid)
    {
        if( digit13 == 1 && digit12 == 6 )
        {
            printf("VISA\n");
        }

        else if( digit13 == 4 )
        {
            printf("VISA\n");
        }
        else printf("INVALID\n");
    }

    else if (isValid == false) printf("INVALID\n");

    else printf("INVALID\n");

}