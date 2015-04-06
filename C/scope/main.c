//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

// FUNCTIONAL SCOPE

// declaration of function
void scope_it_out();
int main()
{
    // declare same variable name but different scoping rules so other one invisible
    char bravo[] = "gamma";
    printf("%s\n", bravo);
    
    int threshold = 5;
    if (threshold > 3) {
        int alpha; // variables only visible within context of this code block
        int beta;
        printf("%d %d\n", alpha, beta);
    }
    
    scope_it_out();
    return 0;
}

// implementation of function
void scope_it_out() {
    // declare and initialize variable within scope of function
    char bravo[] = "gamma";
    printf("%s\n", bravo);
}

// challenge

float addTwo(float a = 0.2, float b = 0.1);

//float main()
//{
//    float num1 = 0.1;
//    float num2 = 0.2;
//    float sum = addTwo(num1, num2);
//    printf("sum %f", sum);
//    return sum;
//}

float addTwo(float a, float b) {
    return a + b;
    
}





