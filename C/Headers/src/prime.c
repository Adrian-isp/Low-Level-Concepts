#include "../include/prime.h"
//include the header file!
#include <math.h>

int isPrime(int num) {
    if(num < 2)
        return 0;
    if(num == 2)
        return 1;
    if(num % 2 == 0)
        return 0;

    for(int i = 3; i < sqrt(num) + 1; i+=2) {
        if(num % i == 0)
            return 0;
    }
    
    return 1;
}