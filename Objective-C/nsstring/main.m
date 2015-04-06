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
    // declare NSString variable (generic wrapper class for a string of characters)
    // using string literal (convenient way to initialize a string)
    NSString *alpha = @"alpha";
    NSString *delta = @"delta";

    // use 'description' method predefined within NSString to print value of string vars
    NSLog(@"%@ %@", alpha, delta);
    
    // concatenate two strings together
    // declare a variable by nesting two methods from NSString
    NSString *concat = [[alpha stringByAppendingString:delta]
                        stringByAppendingString:@"lotsmore"];

    NSLog(@"%@", concat);
    
    // convert string from uppercase to lowercase
    NSString *upper = [alpha uppercaseString];
    NSLog(@"%@", upper);
    
    NSString *color = @"Purple";
    NSString *preference = @"My favorite color is ";
    NSString *favorite = [[preference stringByAppendingString:color]stringByAppendingString:@""];
    NSLog(@"%@", favorite);
    
    return 0;
}
