#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc !=2)
    {
        printf("One argument only.");

        return 1;
    }

    int i =0;
    for (i = 0; argv[1][i] != '\0'; i++)
    {
        char letter = argv[1][i];
        switch(letter)
        {
        case 'r':
        case 'R':
        printf("%d: R./n", i);
        break;

        case 'm':
        case 'M':
        printf("%d: M./n", i);
        break;

        default:
        printf("%d: %c is not R.", i, letter);
        }
    }
}
