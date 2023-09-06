#include "shared.h"

// returns the number of primes less than given & values of all primes
int * find_primes(int max, int * count){
    int markers[max+1];  // will hold 0 & 1 values based on prime or not
    int * primes;
    int index = 0;
    
    // all numbers are initally unmarkerd 
    for (int i = 0; i <= max; i++)
        markers[i] = 0;

    for (int k = 2; k <= sqrt(max); k++) {
        if (!markers[k]) {
            // mark multiples of k
            for (int i = k * 2; i <= max; i += k) {
                markers[i] = 1;
            }
        }
    }

    // get count of prime numbers contained in markers
    for (int i = 2; i <= max; i++) {
        if (!markers[i]) {
            (*count)++;
        }
    }

    // allocate memory for the primes array according the count
    primes = (int*)calloc((*count), sizeof(int));

    // fill the primes array with all the primes
    for (int i = 2; i <= max; i++) {
        if (!markers[i]) {
            primes[index] = i;
            index++;
        }
    }

    return primes;
}