//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

// declare new function that returns int value
// takes two parameters passed to the function
int funky_math(int a, int b);

// main function
int main()
{
    int foo = 24;
    int bar = 35;
    
    int lots = funky_math(foo, bar) * funky_math(foo, bar);
    printf("funky math %d\n", lots);
    
    return 0;
}

// implementation of function
int funky_math(int a, int b) {
    return a + b + 343;
}


