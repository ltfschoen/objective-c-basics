//
//  Circle.h
//  MyFirstObjectiveCProgram
//
//  Created by Luke on 21/04/2014.
//  Copyright (c) 2014 treehouse. All rights reserved.
//

#import "Shape.h"

// Sub-Class has Super-Class Shape
// shares common characteristics (methods, properties) and are available in 'Circle'
// Circle can change the implementation of these if necessary
@interface Circle : Shape

// change implementation
@property(nonatomic) float radius;

// 'area' does not need to be re-declared on the outside the the classes due to Inheritance
// -(float)area method is used in Shape.h, but implementation used is Circle's implementation,
// not Shape's implementation

@end
