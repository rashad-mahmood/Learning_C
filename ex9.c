#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = {0};
    char name[] = {'a','a','a','a'};

    // array without given initialzed values
    printf("numbers: %d %d %d %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c \n",name[0], name[1], name[2], name[3]);
    printf("name: %s \n", name);

    // give values to numbers
    numbers[0] = '1';
    numbers[1] = '2';
    numbers[2] = 3;
    numbers[3] = 4;

    // give values to name
    name[0] = 1;
    name[1] = 34;
    name[2] = 'S';
    name[3] = 'A';

    // print out arrays again
    printf("numbers: %d %d %d %d \n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c \n",name[0], name[1], name[2], name[3]);
    printf("name: %s \n", name);

    // another way to use name
    char *another = "Rashad";

    printf("another each: %c %c %c %c \n", another[0], another[1], another[2], another[3]);
    printf("another: %s \n", another);

    return 0;
}
