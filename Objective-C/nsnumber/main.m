//
//  main.m
//  MyFirstObjectiveCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#import <Cocoa/Cocoa.h>

int main()
{
    // declare NSNumber (generic wrapper for various types of numbers) variable
    // generality is a theme in Object-Oriented Programming (OOP) that we strive to achieve
    // providing flexibility as simplicity to implement whilst retain complexity and power
    NSNumber *mike;
    // load a value into the variable using special 'init' method 'initWithInt'
    // that turns returned number as an int, float, or double version
    mike = [[NSNumber alloc] initWithInt:23];
    // %@ communicates with class to use its 'description' method (default)
    // that presents info about the class, returning the value
    NSLog(@"mike %@", mike);
    
    // alternative, literal notation of special symbol followed by value. assigns value to var
    mike = @23;
    NSLog(@"mike %@", mike);
    
    // make an NSNumber as a double (i.e. PI floating point number)
    NSNumber *pi = @3.145;
    NSLog(@"pi %@", pi);
    
    // convenience constructor
    NSNumber *fancy = [NSNumber numberWithFloat:123.321];
    NSLog(@"fancy %@", fancy);
    
    return 0;
}
