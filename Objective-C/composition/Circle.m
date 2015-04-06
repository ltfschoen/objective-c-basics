//
//  Circle.m
//  MyFirstObjectiveCProgram
//
//  Created by Luke on 21/04/2014.
//  Copyright (c) 2014 treehouse. All rights reserved.
//

#import "Circle.h"

// Circle is subClass of Shape
@implementation Circle

// implementation of area
-(float)area {
    // use M_PI constant
    // 'self' refers to this instance
    return M_PI * self.radius * self.radius;
}

@end
