//
//  CAMapWeatherSearch.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CAMapWeatherSearchOption;
@protocol CAMapWeatherSearchDelegate;

@interface CAMapWeatherSearch : NSObject

@property (nonatomic, weak) id<CAMapWeatherSearchDelegate> delegate;
/**
 *weather检索
 *@param weatherSearchOption      weather检索信息类
 *异步函数，返回结果在BMKWeatherSearchDelegate的onGetWeatherResult通知
 */
- (void)weatherSearch:(CAMapWeatherSearchOption *)weatherSearchOption;
@end

NS_ASSUME_NONNULL_END
