//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

// create new data type in container structure (structured group of values)
// put anything that defines what we want to create inside
// create sphere by using concept called struct with name at end
typedef struct {
    // centre of sphere is combination of 3 floats
    // within struct each individ data is called a field
    float center[3];
    float radius;
} Sphere;

// declare utility functions to manipulate sphere
// takes two parameters (center, radius)
// use * notation to pass an array to a function
Sphere makeSphere(float *c, float r);

// main function
int main()
{

// REFACTOR TO BELOW FUNCTION
//===========================
//    // create variable of type Sphere with name 'ball'
//    Sphere ball;
//    
//    // set values within typedef struct
//    // place center of sphere in 3D space
//    // access fields with '.'
//    ball.center[0] = 24;
//    ball.center[1] = 32;
//    ball.center[2] = 45;
//    
//    ball.radius = 67;
    float c[] = { 23, 45, 67 };
    float r = 32;
    Sphere ball = makeSphere(c, r);
    
    printf("center %f %f %f radius %f\n", ball.center[0], ball.center[1], ball.center[2], ball.radius);
    
    return 0;
}

// implement makeSphere
// passing in pointer '*c' which is an array (not just a single float value)
Sphere makeSphere(float *c, float r) {
    // instance of type Sphere within implementation function that will return
    Sphere sphere;
    
    // set variable sphere based on values (pointers) passed in
    sphere.center[0] = c[0];
    sphere.center[1] = c[1];
    sphere.center[2] = c[2];
    
    sphere.radius = r;
    
    // return sphere to main() to be printed to output
    return sphere;
}

