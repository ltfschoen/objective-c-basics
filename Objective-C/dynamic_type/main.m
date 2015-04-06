//
//  main.m
//  MyFirstObjectiveCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "Shape.h"

int main()
{
    // create instance of shape with alloc init
    Shape *shape = [[Shape alloc] init];
    
    // declare an array containing a variety of types
    NSArray *mixed = @[ @23, @"tango", shape];
    
    // traverse array and print out each object
    // declare 'thing' of type ID, then use 'thing' to retrieve items from the array
    // ID is a special Objective-C keyword that means 'unspecified' Object (generic pointer)
    // that can point to any class. do not use * (as we would for normal types)
    for (id thing in mixed) {
        // NSLog statement is calling the 'description' method on 'thing' (indicated by %@)
        // correct implementation of description found (even though 'thing' is of type ID)
        // is because Objective-C is dynamic language and will always call the relevant Object
        // provides 'flexibility' when programming (less concern with being specific, as
        // Objective-C allows us to discover the type on the fly as needed
        
//        NSLog(@"%@", thing);
        
        // alternatively, if want make obvious we're using the default 'description' method
        // by calling it directly
        NSLog(@"%@", [thing description]);
    }
    
    return 0;
}
