#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "Adrian";
    char str2[] = "Rosu";

    //strlwr(str1);             lower letters
    //strupr(str2);             capitalise letters  
    //strcat(str1, str2);       add second string to the first
    //strncat(str1, str2, 2);   add n letters from second to first string
    //strcpy(str1, str2);       copies second value to first
    //strncpy(str1, str2);      copies n letters from second value to first

    int result;
    result = strlen(str1);          // return length of string
    result = strcmp(str1, str2);    // finds if both strings have the same characters
    //result = strncmp(str1, str2, 1)   // compares n letters in strings
    //result = strcmpi(str1, str2);     //  same but not case sensitive
    //result = strnicmp(str1, str2, 2); //  same but not case sensitive

    printf("%s\n", str1);
    printf("%s\n", str2);

    printf("%d\n", result);

    return 0;
}