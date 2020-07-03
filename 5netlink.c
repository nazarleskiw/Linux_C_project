#include <stdio.h>
#include "functions.h"



// 5. "Netlink":
// entry: pipe
// Modification/exit x: sum of the digits x in decimal form


void getValueNetlink(*value, int fileDescriptor);

int main(int argc, char *argv[])
{
    int fileDescriptor;
    programId(3);
    unsigned int value;
    unsigned int result;
    char str[15];
    
    
    fileDescriptor=atoi(argv[1]);
    getValueNetlink(&value, fileDescriptor);


}