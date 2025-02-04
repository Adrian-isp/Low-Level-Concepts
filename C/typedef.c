#include <stdio.h>
#include <string.h>

typedef char name[25];

typedef struct{
    name n;
    int age;
} Pers;

int main(){
    // typedef = a reserved keyword that gives an existing data type a "nickname"
    name n1 = "adi";
    name n2 = "cristi";

    Pers a;
    Pers c;

    strcpy(a.n, n1);
    a.age = 17;
    strcpy(c.n, n2);
    c.age = 14;


    printf("%s are %d ani", a.n, a.age);

    return 0;
}