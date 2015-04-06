//
//  Button.h
//  MyFirstObjectiveCProgram
//
//  Created by Luke on 21/04/2014.
//  Copyright (c) 2014 treehouse. All rights reserved.
//

#import <Foundation/Foundation.h>

// tell the Compiler about the Shape
// so need a Class
// instead of #import Shape.h
// just need inform Compiler that referring to a Shape
// not actually using any parts of the Shape in the .h file
@class Shape;

@interface Button : NSObject

// Button is Composed of a Shape
// so need a Shape Property
// the Property is the Base Class Shape (Polymorphism)
// where refer to a Sub Class via its Super Class
// and communicate with Sub Class as if its a Base Class Shape
// but its behaviour will be that unique to Circle or Square
// Polymorphism = getting diff behaviours, but refer to something
// in one common way
@property (nonatomic, strong) Shape *shape;

@end
