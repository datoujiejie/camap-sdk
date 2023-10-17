//
//  CAMapWeatherLive.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAMapWeatherLive : NSObject
///区域编码
@property (nonatomic, copy) NSString *adcode;
///省份名
@property (nonatomic, copy) NSString *province;
///城市名
@property (nonatomic, copy) NSString *city;
///天气现象
@property (nonatomic, copy) NSString *weather;
///实时温度
@property (nonatomic, copy) NSString *temperature;
///风向
@property (nonatomic, copy) NSString *windDirection;
///风力，单位：级
@property (nonatomic, copy) NSString *windPower;
///空气湿度
@property (nonatomic, copy) NSString *humidity;
///数据发布时间
@property (nonatomic, copy) NSString *reportTime; 
@end

NS_ASSUME_NONNULL_END
