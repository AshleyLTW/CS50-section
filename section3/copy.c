#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./copy infile outfile\n");
        return 1;
    }
    // Open file 1
    FILE *infile = fopen(argv[1], "r");
    // Open file 2
    FILE *outfile = fopen(argv[2], "w");
    // Copy characters from file 1 to file 2
    while(true)
    {
        char c = fgetc(infile);
        if (c == EOF)
        {
            break;
        }
        fputc(c, outfile);
    }

    fclose(infile);
    fclose(outfile);
}