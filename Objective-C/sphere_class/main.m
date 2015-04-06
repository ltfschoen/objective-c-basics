//
//  main.m
//  MyFirstObjectiveCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#import <Cocoa/Cocoa.h>

// import Sphere.h Class
// allows type and methods of Sphere to be avail
// for interaction
#import "Sphere.h"

// 'use' of the methods defined in header and implementation files
int main()
{
    // declare variable of type Sphere
    // create instance of type ball, all instances are pointers
    // calls a method called 'alloc' on Sphere
    // result of that method is returned, and then method 'init' called on it again
    // *ball is an instance of type Sphere in a sane state
    Sphere *ball = [[Sphere alloc] init];
    
    // set radius of ball
    // by calling method setRadius on ball
    // and passing in a value to set the value of the
    // instance variable of _radius to 25
    
// REPLACE WITH @PROPERTY SYNTAX BELOW
//    valid statement to call a method [object methodName: paramName];
//    [ball setRadius:25];
    ball.radius = 34;
    
    // print the radius
    // retrieve the radius using the getter

// REPLACE WITH @PROPERTY SYNTAX BELOW
//    NSLog(@"ball radius %f", [ball radius]);
    NSLog(@"ball radius %f", ball.radius);

    return 0;
}
