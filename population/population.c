#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // TODO: Prompt for start size
    int start_size ;
    do
    {
        start_size = get_int("Start size: ") ;
    }
    while (start_size < 9) ;

    // TODO: Prompt for end size
    int end_size ;
    do
    {
        end_size = get_int("End size: ") ;
        if (start_size == end_size)
        {
            printf("Years: 0\n");
            return 0;
        }
    }
    while (end_size <= start_size) ;

    // TODO: Calculate number of years until we reach threshold
    int years = 0 ;
    int new_start_size = start_size ;

    while (new_start_size < end_size)
    {
        int born = new_start_size / 3 ;
        int pass = new_start_size / 4 ;
        new_start_size += born - pass ;
        years++ ;
    }

    // TODO: Print number of years
    printf("Years: %i \n", years);
}

