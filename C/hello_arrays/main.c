//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

int main()
{

    // declare array of floating point variables
    // holds three floating point numbers
//    float numbers_geeks_love[3];
    float numbers_geeks_love[] = {3.1415, 1.6180, 1.4142};
    
    // load array with different floating point numbers
    // by accessing the array at different indexes
//    numbers_geeks_love[0] = 3.1415; // accesses memory location offset of 0
//    numbers_geeks_love[1] = 1.6180; // accesses memory location offset of 1
//    numbers_geeks_love[2] = 1.4142; // accesses memory location offset of 2
    
    // retrieve and print contents of array
    printf("PI %f\n", numbers_geeks_love[0]);
    printf("golden ratio %f\n", numbers_geeks_love[1]);
    printf("square root of %f\n", numbers_geeks_love[2]);
    
    // declare and initialize array for first time
    int primes[] = {2, 3, 5, 7};
    printf("the first 4 prime numbers %d %d %d %d\n", primes[0], primes[1], primes[2], primes[3]);
    
    return 0;
}

