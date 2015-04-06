//
//  Sphere.h
//  MyFirstObjectiveCProgram
//
//  Created by Luke on 21/04/2014.
//  Copyright (c) 2014 treehouse. All rights reserved.
//

#import <Foundation/Foundation.h>

// Class (Objective-C) is similar to Struct (C)
// do not manipulate instance variables directly
// functions perform manipulation on our behalf,
// methods (functions) that are setters and getters
// Sphere is subclass of NSObject

// REPLACE WITH @PROPERTY SYNTAX BELOW
//@interface Sphere : NSObject {
//    NSArray *_center; // return pointer to the array
//    float _radius;
//}

@interface Sphere : NSObject

// interact with the class Object directly using
// setter and getter methods called messages

@property(nonatomic) float radius;

@property(nonatomic, strong) NSArray *center;

// REPLACE WITH @PROPERTY SYNTAX ABOVE
// (WE JUST WRITE PROPERTIES AND COMPILER TAKES CARE OF THE REST)
//
//// RADIUS
////=======
////
//// setter (for Radius)
//// instance method (indicated with '-') returns void, passed param of type float, named radius
//-(void)setRadius:(float)radius;
//
//// getter (for Radius)
//-(float)radius;
//
//// CENTER
////=======
////
//// setter (for Radius)
//-(void)setCenter:(NSArray *)center;
//
//// getter (for Radius)
//-(NSArray *)center;
//
//// EXAMPLE OF SETTING SUCCESSIVE PARAMETERS
//-(void)setCenter:(NSArray *)center radius:(float)radius;

@end
