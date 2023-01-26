// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Dfined functions
string replace(string word);

int main(int argc, string argv[])
{

}

string replace(string word)
{
    string str = word
    int len = strlen(arg);
    for (int i = 0; i < len; i++)
    {
        switch (word[i])
        {
            case "a" || "A":
                word[i] = "6";
                break;

            case "e" || "E":
                word[i] = "3";
                break;

            case "i" || "I":
                word[i] = "1";
                break;

            case "o" || "O":
                word[i] = "0";
                break;

            default:
                word[i] = word[i];
                break;
        }
    }
}