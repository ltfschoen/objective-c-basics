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
    // declare NSDictionary variable (generic wrapper class)
    // list Objects with Value/Key Value/Key ... and then end with a 'nil'
    // REPLACED WITH 'DICTIONARY LITERAL VERSION BELOW (EASIER)
    //NSDictionary *book = [[NSDictionary alloc] initWithObjectsAndKeys:@"The Cat in the Hat", @"title", @"Dr. Seuss", @"author", nil];
    
    // alternative to create is to use the 'dictionary literal' with Key/Value
    NSDictionary *book = @{ @"title":@"The Cat in the Hat", @"author":@"Dr. Seuss" };
    
    // use 'description' method to print contents of book
    NSLog(@"book %@", book);

    // retrieve value from dictionary (i.e. a string in this case)
    NSString *string = [book objectForKey:@"author"];
    NSLog(@"string %@", string);
    
    // mutable version of dictionary (modifiable) named mutableBook using convenience function to create an empty []
    //NSMutableDictionary *mutableBook = [NSMutableDictionary dictionary];
    
    // alternatively create mutable version of dictionary (modifiable) named mutableBook using convenience function to create an empty [] from preexisting dictionaries
    NSMutableDictionary *mutableBook = [NSMutableDictionary dictionaryWithDictionary:book];
    
    // add a year to the dictionary
    [mutableBook setObject:@1957 forKey:@"year"];
    NSLog(@"%@", mutableBook);
    
    // traverse a dictionary and extract values from it
    // use for loop
    // keys of dictionary can be extracted as an array
    // 'allKeys' method returns an array (use result of a method call without assigning it to a variable)
    for (NSString *string in [mutableBook allKeys]) {
        // using key to access corresponding value in dictionary
        NSLog(@"key %@ value %@", string, [mutableBook objectForKey:string]);
    }
    
    
    return 0;
}
