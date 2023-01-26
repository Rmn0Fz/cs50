#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get name input from user
    string name = get_string("Whats your name? ");
    // Print in formated form
    printf("hello, %s\n", name);
}