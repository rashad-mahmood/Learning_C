#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = argc;

    while(i-1 > 0)
    {
        printf("Argument %d: %s \n", argc - i, argv[argc - i - 1]);
        i--;
    }

    i = 0;
    int count = 3;
    char *names[] = {"Rashad", "Rahat", "Mohsin"};

    while(i < count)
    {
        printf("Name %d: %s \n", i, names[i]);
        i++;
    }
    return 0;
}
