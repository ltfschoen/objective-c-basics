//
//  Shape.m
//  MyFirstObjectiveCProgram
//
//  Created by Luke on 22/04/2014.
//  Copyright (c) 2014 treehouse. All rights reserved.
//

#import "Shape.h"

// Shape's implementation of area
@implementation Shape

//@synthesize color = _color;

-(double)area {
    return -1;
}

//-(BOOL)hitTestAtLocation:(CGPoint)location {
//    return NO;
//}

// OVERRIDDEN DEFAULT IMPLEMENTATION OF 'DESCRIPTION' METHOD
// AND CREATED OUR OWN SPECIFIC TO THE SHAPE CLASS
-(NSString *)description {
    return [NSString stringWithFormat:@"I am %@. My parent is %@. area %f.",
            [self class], [self superclass], [self area]];
}

@end

