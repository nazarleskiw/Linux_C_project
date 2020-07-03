#include "functions.h"

char * program[] = {"empty", "Konsola-modulo 10 modification ", "Argument- next prime", "Pipe", "4", "5", "6"};


void programId(int progId)
{
    int k;
    printf("This is program number: %d!\n" , progId);
}


void end(int numer, unsigned int integer, unsigned int wynik)
{
    printf("integer po modyfikacji: %u %s\n\n" RESET, wynik, program[numer]);
}

void functionModulo(unsigned int value, unsigned int * result, char * string ) {
    *result = value % 10;
    memset(string, 0, 10);
    sprintf(string, "%u", *result);
}

bool checkStr(const char *Str)
{
    char *ptr = Str;
    while( *ptr )
    {
        if( ! (*ptr >= 0x30 && *ptr <= 0x39 ) )
        {
            return 0;
        }
        ptr++;
    }
    return 1;
}


int parseGetopt(int argc, char *argv[])
{
    int c;
    int xflg = 0;
    while ((c = getopt(argc, argv, "x:")) != -1)
    {
        switch (xflg)
        {
            case 'x':
                xflg = atoi(optarg);
                return xflg;
                break;
        }
    }
    return -1;
}

bool isPrime(int n)
{

    if (n == 2 || n == 3)
        return 1;

    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    int divisor = 6;
    while (divisor * divisor - 2 * divisor + 1 <= n)
    {

        if (n % (divisor - 1) == 0)
            return 0;

        if (n % (divisor + 1) == 0)
            return 0;

        divisor += 6;
    }
    return 1;
}

int nextPrime (int n)
{
    while (!isPrime(++n))
    { }
    return n;
}

void functionPrime(unsigned int value, unsigned int *result, char *str )
{
    *result = nextPrime(value);
    memset(str, 0, 10);
    sprintf(str, "%u", *result);
}