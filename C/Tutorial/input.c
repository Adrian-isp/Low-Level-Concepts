#include <stdio.h>

int main(){
    char name[25];
    char fullName[25];
    int age;
    
    printf("What\'s your full name?\n");
    
    // scanf("%variableFormat", variable);
    // excludes whitespace!
    //scanf("%s", &name);

    fgets(fullName, 25, stdin);

    printf("Hello, %s!\n", fullName);

    printf("How old are you? ");
    scanf("%d", &age);

    printf("you are %d years old", age);

    return 0;
}