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
    pid_t processId = fork();

    if (processId == -1)
         {
             perror("Error");
         }

    else if (processId == 0)

    {
        fd = open(myfifo,O_WRONLY); //open to wriing only

        if (write(fd, str ,sizeof(str)) < 0)
        {
            perror("Error");
        }

        close(fd);
        exit(0);
    }

    else

    {
        fflush(stdout);
        fprintf(stderr,"Argument %s sent to FIFO",str);
        execl("./exec/3pipe.out", "empty", NULL);
    }


}
