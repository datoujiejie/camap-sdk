//
//  CAMapWeatherForecast.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAMapWeatherForecast : NSObject
/// 日期，北京时区
@property (nonatomic, copy) NSString *date;
/// 星期，北京时区
@property (nonatomic, copy) NSString *week;
/// 最低温度(℃)
@property (nonatomic, assign) NSInteger lowestTemp;
/// 最高温度(℃)
@property (nonatomic, assign) NSInteger highestTemp;
/// 白天风力
@property (nonatomic, copy) NSString *windPowerDay;
/// 晚上风力
@property (nonatomic, copy) NSString *windPowerNight;
/// 白天风向
@property (nonatomic, copy) NSString *windDirectionDay;
/// 晚上风向
@property (nonatomic, copy) NSString *windDirectionrNight;
/// 白天天气现象
@property (nonatomic, copy) NSString *phenomenonDay;
/// 晚上天气现象
@property (nonatomic, copy) NSString *phenomenonNight;
/// 空气质量指数数值，高级字段
@property (nonatomic, assign) NSInteger airQualityIndex;
@end

NS_ASSUME_NONNULL_END
