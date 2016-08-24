//
//  Calculator.h
//  parkjs
//
//  Created by user on 2016. 8. 23..
//  Copyright © 2016년 lotte.net. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Calculator : NSObject

@property (nonatomic, assign) double accumulator;

-(void) clear;
-(void) add:(double) value;
-(void) subtract:(double) value;
-(void) multiply:(double) value;
-(void) divide:(double) value;

@end
