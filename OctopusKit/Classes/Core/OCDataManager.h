//
//  OCDataManager.h
//  OctopustKit
//
//  Created by icoco7 on 6/21/15.
//  Copyright (c) 2015 RobinCheung. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OCWebService;


typedef void(^OCInvokeSuccessBlock)(id response);
typedef void(^OCInvokeFailureBlock)(NSError *error);
typedef id(^OCFilterBlock)(id response);

@interface OCDataManager : NSObject

+ (instancetype)sharedInstance;


/*
 * Must define the property 'delegate' of the service if call this method
 */
- (void)invokeService:(OCWebService*)service ;

/*
 * define the success block and failure block directly
 */
- (void)invokeService:(OCWebService*)service success:(OCInvokeSuccessBlock)success failure:(OCInvokeFailureBlock)failure ;

 

@end
