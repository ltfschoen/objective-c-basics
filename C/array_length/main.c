//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

// main function
int main()
{
    float numbers[] = {11.11, 22.22, 33.33};

    // computer length of this array (memory consumed by numbers) to store 3 floats
    // then divide by size of a float and result will be size of array (length)
    printf("float %ld bytes\n", sizeof(float)); // where size of a float is 4 bytes
    printf("numbers %ld bytes\n", sizeof(numbers));
    printf("array length %ld.\n", sizeof(numbers)/sizeof(float));
    
    int size = 5;
    float real_numbers[size];
    printf("Array real_numbers is %ld bytes.\n", sizeof(real_numbers));
    printf("Array real_numbers can store %ld items.", sizeof(real_numbers)/sizeof(float));
    
    return 0;
}



