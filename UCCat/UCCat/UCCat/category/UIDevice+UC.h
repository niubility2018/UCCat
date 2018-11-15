//
//  UIDevice+UC.h
//  UCCat
//
//  Created by xubojoy on 2018/11/15.
//  Copyright © 2018 xubojoy. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (UC)
/**
 *  获取设备唯一编号
 *
 *  @param service 名称
 *
 *  @return 获取设备唯一编号
 */
+ (NSString *)load:(NSString *)service;
+ (void)delete:(NSString *)service;
/**
 获取设备名称
 */
+(NSString *)getDeviceName;
/**
 *  获取设备系统
 *
 *  @return <#return value description#>
 */
+(NSString *)getDeviceOS;
/**
 *  获取APP版本号
 *
 *  @return <#return value description#>
 */
+(NSString *)getAPPVersion;

/**
 系统版本
 
 @return <#return value description#>
 */
+(NSString *)getSystemVersionOS;

/**
 设备类型
 
 @return <#return value description#>
 */
+(NSString *)getPhoneModel;

/**
 外部版本号
 
 @return <#return value description#>
 */
+(NSString *)getApp_Version;

/**
 获取设备分辨率
 */
+ (NSString *)getDevice_Resolution;

/**
 获取设备IP
 */
+ (NSString *)getDeviceIPAdress;

/**
 可获取WiFi及蜂窝网络的IP
 */
+ (NSString *)getIPAddress:(BOOL)preferIPv4;

/**
 获取设备MAC地址
 */
+(NSString*)getDeviceMAC;


/**
 获取设备WIFI MAC地址
 */
+ (NSString *)getWIFIMAC;


/**
 判断是否越狱
 */
- (NSString *) jailbreak;

/**
 判断是否是模拟器
 */
+ (NSString *) isVirtualMachine;


@end

NS_ASSUME_NONNULL_END
