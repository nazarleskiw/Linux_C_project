#include <stdio.h>
#include <limits.h>
#include "functions.h"


// 1. "Konsola":
// entry: stdin
// Modification/exit x:=x modulo 10

void getValue(unsigned int *value);


bool is_number(const char *string);

void  changeModulo(unsigned int value, unsigned int * result, char * string );


int main(void)
{
    unsigned int value;
    unsigned int result;
    char string_result[10];
    programId(1);


    while(1)
    {
        getValue(&value);

    
        changeModulo(value, &result, string_result);

    }

}
bool is_number(const char * string) {
    int str_size = strlen(string);
    int k = 0;
    if( (string[0] == '+') || (string[0] == '-') )  k = 1;
    for(; k < str_size; k++) {

        if( (string[k] < '0') || (string[k] > '9' ) ) return 0;

    }
    return 1;
}

void getValue(unsigned int *value)
{
    char inputStr[1024];
    memset(inputStr,0 ,1024);
    bool status_str;
    bool comparision = true;
    do{
        do{
            printf("Enter an integer from 0 to 4.294.967.295: ");
            fflush(stdin);
            scanf("%s", inputStr);
            status_str = is_number(inputStr);

            if(status_str == 0)
            {
                comparision("You entered a string instead of an integer. ");
            }
            fflush(stdout);
        }

        while(status_str == 0);

      
        }
    }
    while(status_nr == 0);
}
