/*
Author: Natalya Langford 
CS201 D. Kevin McGrath 
Lab 0 Part 2: 1001th prime number
*/

#include "shared.h"

/* This program will use the prime function helper to
    find the 1001st prime number and print it.
    - The 1001s prime number will be somewhere in the
    vincity of 1001ln(1001) = 7000
    - Double 7000 -> 14000 and find all prime numbers
*/

// returns the number of primes less than given & values of all primes
int * find_primes(int max, int * count);

int main(int argc, char * argv[]){
    int counter1, counter2;
    int max;
    int * primes;
    int nth;  // we want to find the 1001st prime number 
    double nth_approximation;
    int nth_prime;
    counter1 = counter2 = 0;
    nth = 1001;
    nth_approximation = nth*log(nth); // to get a the appxoimation of around 7000
    max = nth_approximation * 2; // double for sake of code

 //   printf("nth_approximation: %f\n", nth_approximation);
 //   printf("max: %d\n", max);
    
    // first find the 1001th prime number
    primes = find_primes(nth_approximation, &counter1);
 //   printf("count: %d", counter1);
    nth_prime = primes[counter1 - 1]; // nth prime will be last num in prime array
    printf("The 1001st prime number is %d\n", nth_prime);

    // now double the nth prime approximation and find all prime numbers less than that
    free(primes);
    primes = find_primes(max, &counter2);
    nth_prime = primes[counter2 - 1]; // nth prime will be last num in prime array

    printf("There are %d prime numbers that are less than %d\n", counter2, max);
    printf("The prime numbers are: \n");
    for (int i = 0; i < counter2; i++) {
            printf("%d ", primes[i]);
    }

    return 0;
}
