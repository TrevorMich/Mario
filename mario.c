#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int line;
    int hash;
    int space;
    int height;

    //prompt user for height
    do
    {
         height = get_int("Height: ");
    }
    while(height < 0 || height > 8);

     for(line = 0;  line < height;  line++)
    {
        for (space =  height -1;  space > line;  space--)
        {
            printf(" ");
        }
        for(hash = -1;  hash <  line;  hash++)
        {
            printf("#");
        }

        printf("  ");

          for(hash = -1;  hash <  line;  hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}