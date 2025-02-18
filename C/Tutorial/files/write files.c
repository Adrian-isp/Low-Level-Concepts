#include <stdio.h>

int main() { 
    /* C writing files using the FILE 
        "w" = writing
        "a" = adding
     */
    FILE *pF = fopen("names.txt", "w");

    fprintf(pF, "Doubya\n");
    fprintf(pF, "Obamna\n");
    fprintf(pF, "GGTrump\n");

    fclose(pF);

    return 0;
}