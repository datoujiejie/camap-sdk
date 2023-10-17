//
//  CAMapConfig.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSInteger,CAMapType) {
    CAMapType_None = 0,
    // 高德地图
    CAMapType_AMAP,
    // 百度地图
    CAMapType_BMAP,
    // 腾讯地图
    CAMapType_TMAP,
};


/// 地图配置类
@interface CAMapConfig : NSObject

/// 单例
+ (instancetype)shareInstance;

/// appid 从平台获取
@property (nonatomic, copy) NSString *apiKey;


/// 地图类型 
@property (nonatomic, assign) CAMapType mapType;

/// sdk初始化
/// - Parameters:
///   - apiKey: 对应sdk的key(平台分配)
///   - type: 地图渠道
+(void)sdkInit:(NSString *)apiKey type:(CAMapType)type;

/// sdk初始化
/// - Parameters:
///   - apiKey: 对应sdk的key(原始key)
///   - type: 地图渠道
+(void)sdkInitOrigin:(NSString *)apiKey type:(CAMapType)type;

/// 是否显示隐私政策
/// - Parameter show: 是否显示
+(void)showPrivacy:(Boolean)show;

/// 是否同意隐私政策
/// - Parameter show: 是否同意
+(void)agreePrivacy:(Boolean)agree;
@end

NS_ASSUME_NONNULL_END
