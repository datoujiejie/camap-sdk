//
//  CAMapWeatherSearchResult.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CAMapWeatherLive;
@class CAMapWeatherForecast;

@interface CAMapWeatherSearchResult : NSObject
///实时天气数据信息 AMapLocalWeatherLive 数组，仅在请求实时天气时有返回。
@property (nonatomic, strong) NSArray<CAMapWeatherLive *> *lives;
///预报天气数据信息 AMapLocalWeatherForecast 数组，仅在请求预报天气时有返回
@property (nonatomic, strong) NSArray<CAMapWeatherLive *> *forecasts; 
@end

NS_ASSUME_NONNULL_END
