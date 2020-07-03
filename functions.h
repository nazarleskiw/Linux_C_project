#pragma once


#include <math.h>
#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define true 1
#define false 0

typedef int bool;

char *programSelect[6];
void programId(int progId);
int parseGetopt(int argc, char *argv[]);
bool isPrime(int n);
int next_prime(int n);
