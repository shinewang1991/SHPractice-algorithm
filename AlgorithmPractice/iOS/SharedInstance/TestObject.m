//
//  TestObject.m
//  AlgorithmPractice
//
//  Created by Shine on 2019/2/27.
//  Copyright © 2019 shine. All rights reserved.
//

#import "TestObject.h"

@implementation TestObject

//@synchronzed形式
//+ (instancetype)sharedInstance{
//    static TestObject *_sharedInstance;
//    @synchronized (self) {
//        if(_sharedInstance == nil){
//            _sharedInstance = [[super allocWithZone:NULL] init];
//        }
//    }
//    return _sharedInstance;
//}

//GCD版本
+ (instancetype)sharedInstance{
    static TestObject *_sharedInstance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken,^{
        _sharedInstance = [[super allocWithZone:NULL] init];
    });
    return _sharedInstance;
}

+ (instancetype)allocWithZone:(struct _NSZone *)zone{
    return [self sharedInstance];
}

- (instancetype)copyWithZone:(NSZone *)zone{
    return self;
}

@end
