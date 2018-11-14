//
//  UIImage+UC.h
//  UCCat
//
//  Created by xubojoy on 2018/11/14.
//  Copyright © 2018 xubojoy. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (UC)
/**
 根据颜色生成图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;
@end

NS_ASSUME_NONNULL_END
