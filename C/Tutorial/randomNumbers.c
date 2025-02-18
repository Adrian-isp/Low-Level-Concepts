#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // pseudo nrandom numbers - numbers that follow a sequence given a seed
    srand(time(0));

    int number = (rand() % 6) + 1;

    printf("number is equal to %d", number);

    return 0;
}