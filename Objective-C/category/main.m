//
//  main.m
//  MyFirstObjectiveCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#import <Cocoa/Cocoa.h>

// Category is convenience organising tool to create suites of methods
// that all share a common theme. it customises system Classes to
// particular needs of the app. not need depend on the system Class providing the
// methods. we can extend those Classes using Categories

// import file containing Category
// allows use of methods directly on array instance
#import "NSArray+Mayhem.h"

// app with string manipulation using arrays
int main()
{
    
    // declare
    NSArray *letters = @[ @"alfa", @"bravo", @"charlie" ];
    NSLog(@"letter %@", letters);
    
// SHIFTED TO CATEGORY CLASS NSARRAY MAYHEM IMPLEMENTATION
//    // periodically capitalise first letter of each string in array
//    NSMutableArray *cap = [NSMutableArray array];
//    
//    // traverse array and capitalize first letter of each string
//    for (NSString *string in letters) {
//        [cap addObject:[string capitalizedString]];
//    }
    
    // use Categories technique to add this capability directly to NSArray Class
    // create a Categories Class
    // this saves repeating this numerous times in app
   
// MODIFY DUE TO SHIFT TO CATEGORY CLASS NSARRAY MAYHEM
//    NSLog(@"cap %@", cap);
    NSLog(@"cap %@", [letters capitalizeStrings]);
    
    return 0;
}
