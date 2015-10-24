#include <stdio.h>

int i = 0;

void print_letters(char arg[])
{
    int i = 0;
    for (i = 0; i != '\0'; i++){
        printf("%c", arg[i]);
    }
    printf("\n");
}

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    for (i = 0; i < argc; i++){
        print_letters(argv[i]);
    }
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
