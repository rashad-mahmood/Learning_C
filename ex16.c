#include <stdio.h>     // printf,
#include <assert.h>    // assert,
#include <stdlib.h>
#include <string.h>

// Define structure with attributes
struct Person{
    char *name;  // attribute 1
    int age;     // attribute 2
    int height; // ...
    int weight;
};


struct Person *Create(char *name, int age, int height, int weight){

        struct Person *who = malloc(sizeof(struct Person));
        assert(who != NULL);

        who->name = strdup(name);
        who->age = age;
        who->height = height;
        who->weight = weight;

        return who;
}

void Destroy(struct Person *who){

    assert(who != NULL);

    //   free(who->name);
    free(who);
}

void Print(struct Person *who){

    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[]){

/* struct Person *rashad = Create("Rashad", 11, 12, 13);
    struct Person *papa = Create("Mohsin", 21, 22, 23);

    printf("Rashad is at memory location %p: \n", rashad);
    Print(rashad);
    printf("Mohsin is at memory location %p: \n", papa);
    Print(papa);

    rashad->age += 20;
    rashad->height -= 2;
    rashad->weight -= 40;
    Print(rashad);

    papa->age += 20;
    papa->weight -= 20;
    Print(papa);

    Destroy(rashad);
     Destroy();
*/
    struct Person rashad;
    rashad.age = 24;
    printf("Rashad's age: %d\n", rashad.age);
    return 0;
}
