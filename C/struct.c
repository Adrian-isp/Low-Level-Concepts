#include <stdio.h>
#include <string.h>

struct Player{
    char name[20];
    int score;
};

int main(){
    /* struct = collection of related members ("variables")
                they can be of different data types
                listed under one name in memory
                similar to classes in other langs (but have NO METHODS)
     */

    struct Player p1;
    struct Player p2;

    strcpy(p1.name, "Namibu");
    strcpy(p2.name, "Harambe");

    p1.score = 300;
    p2.score = 441;

    printf("%s has %d points\n", p1.name, p1.score);
    printf("%s has %d points", p2.name, p2.score);

    return 0;
}