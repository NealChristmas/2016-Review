//
//  Car.m
//  12.06.01 set方法的内存管理
//
//  Created by 张凯泽 on 15/12/6.
//  Copyright (c) 2015年 rytong_zkz. All rights reserved.
//

#import "Car.h"

@implementation Car
-(void)dealloc
{
    NSLog(@"car dealloc");
    [super dealloc];
}
@end
