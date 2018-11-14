//
//  UITextField+UC.h
//  UCCat
//
//  Created by xubojoy on 2018/11/14.
//  Copyright © 2018 xubojoy. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (UC)
/**
 Set all text selected.
 */
- (void)selectAllText;

/**
 Set text in range selected.
 
 @param range  The range of selected text in a document.
 */
- (void)setSelectedRange:(NSRange)range;
@end

NS_ASSUME_NONNULL_END
