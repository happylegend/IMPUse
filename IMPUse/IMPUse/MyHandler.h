//
//  MyHandler.h
//  IMPUse
//
//  Created by 紫冬 on 13-8-27.
//  Copyright (c) 2013年 qsji. All rights reserved.
//


/*
 使用IMP的步骤：
 第一步：获得要执行的selector
 第二步：利用methodForSelector方法获取对象的函数selector的入口地址，得到IMP imp
 第三步：利用imp()，执行
 */
#import <Foundation/Foundation.h>

@interface MyHandler : NSObject
{
    id _callbackObject;
    NSString *_functionName;
}

@property(nonatomic, assign)id callbackObject;
@property(nonatomic, copy)NSString *functionName;

-(void)setCallbackObject:(id)callbackObject functionName:(NSString *)functionName;

-(void)handleThing;

@end
