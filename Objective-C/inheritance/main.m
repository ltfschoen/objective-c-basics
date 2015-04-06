//
//  main.m
//  MyFirstObjectiveCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#import <Cocoa/Cocoa.h>

// import Shape class 'Shape.h' and Circle.h
#import "Shape.h"
#import "Circle.h"

int main()
{
    // calling methods that were implemented in a Base/Super Class
    // change underlying implementation in its Sub Class
    
    // declare instance of Shape
    // alloc (allocate memory) and intialize it
    Shape *shape = [[Shape alloc] init];
    
    // print value returned by area from Shape
    NSLog(@"shape area %f", [shape area]);
    
    // test Circle's interpretation of area is
    Circle *round = [[Circle alloc] init];
    
    round.radius = 25;
    
    // print round's implementation of area
    NSLog(@"circle area %f", [round area]);
    
    return 0;
}
