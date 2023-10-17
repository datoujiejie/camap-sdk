//
//  CAMapRouteSearchAdapter.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CAMapDrivingRoutePlanOption;
@protocol CAMapRouteSearchDelegate;

@interface CAMapRouteSearchAdapter : NSObject
@property (nonatomic, weak) id<CAMapRouteSearchDelegate> delegate;
/**
 *驾乘路线检索
 *异步函数，返回结果在BMKRouteSearchDelegate的onGetDrivingRouteResult通知
 *@param drivingRoutePlanOption 驾车检索信息类
 */
- (void)drivingSearch:(CAMapDrivingRoutePlanOption *)drivingRoutePlanOption;
@end

NS_ASSUME_NONNULL_END
