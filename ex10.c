#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // skip first argument since it is command to execute './ex10'
    for(i = 1; i < argc; i++)
    {
        char *test = "end";
        if (argv[i] == test){
            break;
        }
        printf("Argument number %d: %s \n", i, argv[i]);
    }

    char *songs[] = {"Can't Feel Face", "Uncover", "Trap Queen"};
    int song_total = 3;

    for (i = 0; i < song_total; i++)
    {
        printf("Song %d: %s \n", i, songs[i]);
    }
    return 0;
}
