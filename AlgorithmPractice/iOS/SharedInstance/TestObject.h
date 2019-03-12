//
//  TestObject.h
//  AlgorithmPractice
//
//  Created by Shine on 2019/2/27.
//  Copyright © 2019 shine. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//写一个单例
@interface TestObject : NSObject<NSCopying>

+ (instancetype)sharedInstance;
@end

NS_ASSUME_NONNULL_END
