#include <stdio.h>
#include "functions.h"



// 6. "Network":
// entry: stream tcp
// Modification/exit x: result modification




int main(int argc, char *argv[])
{
    programId(6);
    unsigned int value = inHost(8000);
    unsigned int result =value +2;
    outHost(result,9000)

}