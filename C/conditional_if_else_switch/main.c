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

    int a = 11;
    int b = 9;
    int minimum;
    char min_value;
    
    if (a < b) {
        minimum = a;
        min_value = 'a';
    } else {
        minimum = b;
        min_value = 'b'; // returns letter equiv of int
        if (minimum == 9) printf("minimum is %d\n", b);
        else if (minimum == 11) printf("minimum is %d\n", a);
        else printf("minimum %d not found\n", minimum);
    }
    
    printf("a %d, b %d, minimum %d, min_value %c\n", a, b, minimum, min_value);
    
    char letter = 'q';
    char q = 'q';
    char r = 'r';
    switch (letter) {
        // compare letter with cases until match
        case 'q':
            printf("letter %c is %c\n", letter, q);
            break;
        case 'r':
            printf("letter %c is %c\n", letter, r);
            break;
        default:
            printf("letter %c not found\n", letter);
            break;
    }
    
    return 0;
}

