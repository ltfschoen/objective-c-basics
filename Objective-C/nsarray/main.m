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
    // declare NSArray variable (generic wrapper class)
    // use alloc init pattern
    // layout items (string literals) to place in array seperated by commas, and write nil at end
    // REPLACED WITH EASIER 'ARRAY LITERAL' SHOWN BELOW TO INSERT INTO ARRAY
    //NSArray *foo = [[NSArray alloc] initWithObjects:@"f", @"o", @"o", nil];
    
    // alternatively use array literal to insert into the array (easier to read and understand)
    NSArray *foo = @[ @"f", @"o", @"o" ];
    
    NSLog(@"foo %@", foo);
    
    // alternative way in Objective-C to print with variation of the 'for loop'
    // construct 'in' is used which creates local variable that looks inside the array, finds where it is in the array
    // and this is usable in the code block. it autoincremenents along the code block automatically
    for (NSString *string in foo) {
        NSLog(@"%@", string);
    }
    
    // access elements in the array
    NSString *thang = foo[2];
    NSLog(@"%@", thang);
    
    // alternative to NSArray is to use NSMutableArray if want to be able to ADD and REMOVE from array once created
    NSMutableArray *lots = [[NSMutableArray alloc] init];
    
    // add items to array
    lots[0] = @"bravo"; // able to continuously add/remove items
    lots[1] = @"lima";
    lots[2] = @"charlie";
    NSLog(@"%@", lots);
    
    // remove items from array
    [lots removeObjectAtIndex:2];
    NSLog(@"%@", lots);
    
    
    return 0;
}
