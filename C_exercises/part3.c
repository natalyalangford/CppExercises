/*
Author: Natalya Langford 
CS201 D. Kevin McGrath 
Lab 0 Part 3

Program that will help find the grerated product of five consecutive digits
in a 1000-digit number. Expected answer should be 40824

*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 1000  // we know its a 1000 digit number

int main(int argc, char * argv[]){
    FILE * fp;
    int index = 0;
    int num_list[MAX];  // array to populate 
    int current = 1;
    int largest = 0;

   // int buffer_size = 50; // 50 characters per line

    fp = fopen("nums.txt", "r");  // want to open the file and read it

    if(!fp){
        printf("ERROR: File failed to open\n");
    }
    else 
        printf("FILE SUCCESFULLY OPENED\n");

    // scan numbers into the array, one at a time (%1d)
    while(fscanf(fp, "%1d", &num_list[index]) == 1){
        index++;
    }

    fclose(fp); // close file once scanning is done

    /*
    for(int i = 0; i < index; i++){
        printf("%d", num_list[i]);
    }
    */

   for(int i = 0; i < index - 4; i++){
    
        current = num_list[i] * num_list[i+1] * num_list[i+2] * num_list[i+3] * num_list[i+4];

        if(current > largest)
            largest = current;
   }

   printf("The greated product of 5 consecutive digits \nin the 1000-digit number is: %d\n", largest);

    return 0;
}