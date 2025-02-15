#include <stdio.h>

int main() { 
    /* C writing files using the FILE 
        "w" = writing
        "a" = adding
     */
    FILE *pf = fopen("names.txt", "w");

    fprintf(pf, "Doubya\n");
    fprintf(pf, "Obamna\n");
    fprintf(pf, "GGTrump\n");

    fclose(pf);

    return 0;
}