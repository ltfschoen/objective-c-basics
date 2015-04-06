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
    // array of chars
    char letters[] = { 'a', 'b', 'c' };
    
    // declare and initialize indexing variable
    int w = 0;
    
    // conditional expression
    while (w < 3) {
        printf("letter %d is %c\n", w, letters[w]);
        ++w;
    }
    
    int z = 0;
    
    // code within block only eval once
    // before conditional expression reached
    do {
        printf("letter %d is %c\n", z, letters[z]);
        ++z;
    } while (z < 3); // condit within array length

    return 0;
}

