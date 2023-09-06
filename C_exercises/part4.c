/*

Author: Natalya Langford 
CS201 D. Kevin McGrath 
Lab 0 Part 4

Program that finds the sum of all the multiples of 3 or 5 below a user-given
command line argument 
- Pull value out of argv
- Error checking -> Ensure correct number of arguements supplied 

*/
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]){
    // get user input using argv
    int user_num = atoi(argv[1]);
    int sum = 0;

    // error checking to ensure correct number of arguemnts, should be 2, the program and the user number
    if(argc > 2){
        printf("You have supplied too many arguements\n");
        printf("EX to enter: ./part4 50\n");
    }

    else{
        for(int i = 0; i < user_num; i++){
            if(i % 3 == 0 || i % 5 == 0)
                // if the current num is a mulitple of 3 or 5, add to sum
                sum = sum + i;
        }
    }

    // print results, not including the entered number because we want BELOW 
    printf("The sum of all the multiples of 3 or 5 below %d is %d!\n", user_num, sum);

    return 0;
}