#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("Too few arguments.\n");
    }
    else if (argc > 1)
    {
        int i = 0;
        for (i = 1; i < argc; i++)
        {
            printf("Argument %d: %s ", i, argv[i]);
        }
        printf("\n");
    }
    /*  else {
        printf("Too many arguments.\n");
        }*/

    return 0;
}
