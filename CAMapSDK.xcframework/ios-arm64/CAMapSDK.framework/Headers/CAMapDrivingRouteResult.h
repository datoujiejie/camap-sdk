//
//  CAMapDrivingRouteResult.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CAMapDrivingRouteLine;

/// 路线规划结果
@interface CAMapDrivingRouteResult : NSObject
/// 驾车结果,支持多路线。成员类型为CAMapDrivingRouteLine
@property (nonatomic, copy) NSArray <CAMapDrivingRouteLine *> *routes;
@end

NS_ASSUME_NONNULL_END
