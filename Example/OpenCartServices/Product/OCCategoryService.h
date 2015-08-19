//
//  OCCategoryService.h
//  OpencartKit
//
//  Created by icoco7 on 6/21/15.
//  Copyright (c) 2015 i2Cart. All rights reserved.
//

#import "OCWebService.h"

@interface OCCategoryService : OCWebService

/*
 * getCategories
 *
 * @parentId  if parentId is 0 then return top categories
 *
 * @ref: http://opencart.i2cart.com/index.php?route=category/category&json=1
 */
+ (instancetype)getCategories:(NSString*)parentId;


@end
