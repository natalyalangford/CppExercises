/*
Author: Natalya Langford 
CS201 D. Kevin McGrath 
Lab 0 Part 1: Sieve of Erathosthenes
*/

#include "shared.h"

// returns the number of primes less than given & values of all primes
int * find_primes(int max, int * count);

int main(int argc, char * argv[]) {
    int max;
    int count = 0;
    int * primes;

    // welcome user
    printf("Welcome! This program is based off the Sieve of Erathostenese.\n");
    printf("Once you enter a deseried number, the progrma will tell you the number \nof primes less than the number as well as the values of the primes.\n");
    // get a value from the user
    printf("Enter a number: ");
    scanf("%d", &max);
    // call function to get count and values of primes
    primes = find_primes(max, &count);

    printf("There are %d prime numbers that are less than %d\n", count, max);
    printf("The prime numbers are: \n");
    for (int i = 0; i < count; i++) {
            printf("%d\n", primes[i]);
    }

    return 0;
}