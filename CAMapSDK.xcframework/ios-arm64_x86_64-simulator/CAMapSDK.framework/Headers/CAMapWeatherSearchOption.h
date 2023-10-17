//
//  CAMapWeatherSearchOption.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 天气数据类型枚举
typedef enum {
    CAMapWeatherDataTypeNow = 0,   ///< 实时天气预报
    CAMapWeatherDataTypeForecasts, ///< 未来五天天气预报
} CAMapWeatherDataType;


@interface CAMapWeatherSearchOption : NSObject
/// 必选。区县的行政区划编码，和location二选一
@property (nonatomic, copy) NSString *districtID;
/// 可选。请求数据类型，默认：BMKWeatherDataTypeNow
@property (nonatomic, assign) CAMapWeatherDataType dataType;
@end

NS_ASSUME_NONNULL_END
