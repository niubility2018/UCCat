//
//  UIImage+UC.m
//  UCCat
//
//  Created by xubojoy on 2018/11/14.
//  Copyright © 2018 xubojoy. All rights reserved.
//

#import "UIImage+UC.h"

@implementation UIImage (UC)
+ (UIImage *)imageWithColor:(UIColor *)color{
    CGRect rect = CGRectMake(0.0f, 0.0f, 1.0f, 1.0f);
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context, [color CGColor]);
    CGContextFillRect(context, rect);
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
}
@end
