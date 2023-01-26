#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    long card_number;
    long card_number_copy;
    int sum1 = 0, sum2 = 0, sum = 0;
    int num1, num2;
    int i;
    int first_digit;
    int second_digit;
    long len;
    char str[20];

    card_number = get_long("Number: ");

    sprintf(str, "%ld", card_number); // convert long to a string
    len = strlen(str); // get length of the card number

    // store first two digit
    card_number_copy = card_number;

    first_digit = card_number_copy / (long)pow(10.0, len - 1);
    second_digit = (card_number_copy / (long)pow(10.0, len - 2)) % 10;

    // Luhn’s Algorithm
    // Sum numbers that are not multy. by 2
    for (i = 0; i < len + 1; i++)
    {
        if (i % 2 == 0)
        {
            num1 = (card_number_copy % 10);
            sum1 += num1;
        }
        else
        {
            num2 = 2 * (card_number_copy % 10);
            while (num2 != 0)
            {
                sum2 += (num2 % 10);
                num2 /= 10;
            }
        }
        card_number_copy = card_number_copy / 10;

    }

    // Asign two sums to one common
    sum = sum1 + sum2;
    printf("%ld %i %i\n", len, first_digit, second_digit);

    // Check if the last digit of the sum is 0
    if (sum % 10 == 0)
    {
        // check the first two digits
        if ((len >= 13) && (len <= 16) && (first_digit == 4))
        {
            printf("VISA\n");
        }
        else if ((len == 15) && (first_digit == 3) && ((second_digit == 4) || (second_digit == 7)))
        {
            printf("AMEX\n");
        }
        else if ((len == 16) && (first_digit == 5) && ((second_digit >= 1) && (second_digit <= 5)))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}