#include <stdio.h>

int main(){
    /* C file reading:
        r - read from file
     */
    FILE *pF = fopen("poem.txt", "r");
    char buffer[256];

    // simple file detection
    if(pF == NULL) {
        printf("Unable to locate file");
    }
    else { // print every line using a while loop
        while(fgets(buffer, 256, pF) != NULL) {
            printf("%s", buffer);
        }
    }

    fclose(pF);

    return 0;
}