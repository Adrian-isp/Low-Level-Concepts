#include <stdio.h>

int main() {
    // remove files using the remove method
    if(remove("names.txt") == 0) {
        printf("That file was deleted successfully");
    }
    else {
        printf("That file was not found!");
    }

    return 0;
}