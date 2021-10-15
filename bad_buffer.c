#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Allocate a 5 byte buffer
    char buffer[5];

    // Check if we took a command line argument
    if (argc < 2)
    {
        printf("Error, not enough arguments supplied\n");
        exit(1);
    }

    strcpy(buffer, argv[1]);

    return 0;
}
