#include <stdio.h>

enum Colors {RED, GREEN, BLUE, ORANGE, YELLOW, MAGENTA}; 
//default: RED = 0, GREEN = 1 ...

int main(){
    // Enums - a user defined type of named intager definitions
    //          helps to make a program more readable

    enum Colors myColor = GREEN;

    if(myColor == GREEN){
        printf("You chosen color was green!");
    }

    return 0;
}