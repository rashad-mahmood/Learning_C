#include <stdio.h>

int main(int argc, char *argv[])
{

    int area[] = {10, 'a', 13, 14, 20};
    char name[] = "Rashad";
    char full_name[] = {'R','a','s','h','a','d'};

    // WARNING: On some systems you may have to change the
    // %ld in this code to a %u since it will use unsigned ints
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(area));
    printf("The number of ints in areas: %ld\n", sizeof(area)/sizeof(int));
    printf("The first area is %d, the second is %d.\n", area[0], area[1]);

    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n", sizeof(name)/sizeof(char));
    printf("The number of chars: %ld\n", sizeof(full_name)/sizeof(char));

    return 0;
}
