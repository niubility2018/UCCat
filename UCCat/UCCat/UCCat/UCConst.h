//
//  UCConst.h
//  UCCat
//
//  Created by xubojoy on 2018/11/14.
//  Copyright © 2018 xubojoy. All rights reserved.
//

#ifndef UCConst_h
#define UCConst_h


#endif /* UCConst_h */

#define screenHeight [UIScreen mainScreen].bounds.size.height
#define screenWidth [UIScreen mainScreen].bounds.size.width

#define IOS8  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)?YES:NO
#define IOS12  ([[[UIDevice currentDevice] systemVersion] floatValue] >= 12.0)?YES:NO

#define kDevice_Is_iPhoneX (isIPhoneXSeries() ? YES : NO)
#define SpaceY (kDevice_Is_iPhoneX ? 24 : 0)
#define Nav_Height (kDevice_Is_iPhoneX ? 88 : 64)
#define Status_Height (kDevice_Is_iPhoneX ? 44 : 20)
#define Tabbar_Height (kDevice_Is_iPhoneX ? 83 : 49)
#define Add_Car_Height (kDevice_Is_iPhoneX ? 83 : 55)
#define Common_Space_Height (kDevice_Is_iPhoneX ? 30 : 15)
#define Common_Bottom_Space (kDevice_Is_iPhoneX ? 30 : 0)
#define Common_Space (kDevice_Is_iPhoneX ? 28 : 0)
#define Common_General_Space (kDevice_Is_iPhoneX ? 20 : 0)
#define Common_Margin_Space (kDevice_Is_iPhoneX ? 15 : 0)
#define general_padding 10
#define general_margin  15
#define general_space   20

#define common_page_size 20

static inline BOOL isIPhoneXSeries() {
    BOOL iPhoneXSeries = NO;
    /// 先判断设备是否是iPhone/iPod
    if (UIDevice.currentDevice.userInterfaceIdiom != UIUserInterfaceIdiomPhone) {
        return iPhoneXSeries;
    }
    if (@available(iOS 11.0, *)) {
        /// 利用safeAreaInsets.bottom > 0.0来判断是否是iPhone X及以后设备。
        UIWindow *mainWindow = [[[UIApplication sharedApplication] delegate] window];
        if (mainWindow.safeAreaInsets.bottom > 0.0) {
            iPhoneXSeries = YES;
        }
    }
    return iPhoneXSeries;
}
