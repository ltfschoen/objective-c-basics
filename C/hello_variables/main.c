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
    // integer variable. declaration and initialization
    int days_in_a_week = 7;
    
    // float variable with floating point value
    float cm_to_in = 2.54;
    
    // char variable for single letter
    // declaration only
    char the_w;
    
    // initialization only
    the_w = 'W';
    
    printf("%d days in a week.\n", days_in_a_week);
    printf("%f cm per in.\n", cm_to_in);
    printf("The %c is a cool hotel\n", the_w);
    return 0;
}

