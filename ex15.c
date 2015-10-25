#include <stdio.h>

int main(int argc, char *argv[])
{
    // variables
    int ages[] = {12, 15, 64, 34};
    char *names[] = {"Rashad", "Rahat", "Mohsin", "Lipi"};

    // loop count
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    for (i = 0; i < count; i++){
        printf("Age: %d \nName: %s \n", ages[i], names[i]);
    }
    printf("----\n");

    int *p_ages = ages;
    char **p_names = names;

    for (i = 0; i < count; i++){
        printf("Age: %d \nName: %s \n",*(p_ages+i),*(p_names+i));
    }
    printf("----\n");

    for (i =0; i < count; i++){
        printf("Age: %d \nName: %s \n", p_ages[i], p_names[i]);
    }
    printf("----\n");

    return 0;
}
