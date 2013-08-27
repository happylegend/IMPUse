//
//  MyHandler.m
//  IMPUse
//
//  Created by 紫冬 on 13-8-27.
//  Copyright (c) 2013年 qsji. All rights reserved.
//

#import "MyHandler.h"

@implementation MyHandler
@synthesize callbackObject = _callbackObject;
@synthesize functionName = _functionName;

-(void)setCallbackObject:(id)callbackObject functionName:(NSString *)functionName
{
    self.callbackObject = callbackObject;
    self.functionName = functionName;
}


-(void)handleThing
{
    //使用IMP的步骤
    SEL sel = NSSelectorFromString(self.functionName);
    IMP imp = [self.callbackObject methodForSelector:sel];
    imp(self.callbackObject, sel, @"参数1");
}

@end
