#include <stdio.h>
#include "functions.h"

// 2. "Argument":
// entry: getopt
// Modification/exit x: next prime number

int main(int argc, char *argv[])
{
    programId(2);
    unsigned int value;
    unsigned int result;
    char str[15];
    value = parseGetopt(argc, argv);
    functionPrime(value, &result, str);

    printf("An argument was sent to program number 3: %d\n", result);

    int fd;
    char *myfifo = "/tmp/myfifo";
    mkfifo(myfifo, 0666);


}
