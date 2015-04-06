//
//  NSArray+Mayhem.m
//  MyFirstObjectiveCProgram
//
//  Created by Luke on 22/04/2014.
//  Copyright (c) 2014 treehouse. All rights reserved.
//

#import "NSArray+Mayhem.h"

@implementation NSArray (Mayhem)

-(NSArray *)capitalizeStrings {
    
    // periodically capitalise first letter of each string in array
    NSMutableArray *cap = [NSMutableArray array];
    
    // traverse array and capitalize first letter of each string
// CHANGE TO 'SELF' AS REFERS TO INSTANCE NSARRAY
//    for (NSString *string in letters) {
    for (NSString *string in self) {
        [cap addObject:[string capitalizedString]];
    }
    
    // add return cap (as code now within Category class method)
    return cap;
    
}

@end
