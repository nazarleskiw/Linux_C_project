#include <stdio.h>
#include "functions.h"

// 1. "Konsola":
// entry: stdin
// Modification/exit x:=x modulo 10

int main(void)
{
    programId(1);
    unsigned int value;
    unsigned int result;
    char str[10];


    while(1)
    {
        getValue(&value);
        functionModulo(value, &result, str);
        end(1, value, result);

        printf("An argument was sent to program number 2: %d\n", result);
        runProgram2("temp/prog2.out", "o", str);
    }
}
