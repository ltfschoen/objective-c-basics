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

    // declare in variable a and initialize to value of 9
    int a = 9;
    printf("a %d\n", a);
    
    // auto increment occurs after the assignment
    int c = a++;
    printf("c %d a %d\n", c, a);
    
    // auto decrement before the assignment
    int d = --a;
    printf("d %d a %d\n", c, a);
    
    // modulo long divison and remainders
    int b = a % 4;
    printf("b %d a %d\n", b, a);
    
    float fa = 5.0 / .5;
    printf("fa %f\n", fa);
    
    // compact forms
    fa *= 10;
    printf("fa %f\n", fa);
    
    return 0;
}

