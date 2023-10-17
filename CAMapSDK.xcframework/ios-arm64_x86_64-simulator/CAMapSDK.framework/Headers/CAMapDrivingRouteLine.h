//
//  CAMapDrivingRouteLine.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/27.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@class CAMapPlanNode;
@class CAMapRouteNode;

/// 规划路线
@interface CAMapDrivingRouteLine : NSObject
/// 路线长度 单位： 米
@property (nonatomic, assign) int distance;
/// 路线耗时 单位： 秒
@property (nonatomic, assign) int duration;
/// 路线起点信息
@property (nonatomic, assign) CLLocationCoordinate2D startPoint;
/// 路线终点信息
@property (nonatomic, assign) CLLocationCoordinate2D endPoint;
/// 路线名称(预留字段，现为空)
@property (nonatomic, copy) NSString *title;
/// 路线中的所有路段，成员类型为CAMapRouteStep
@property (nonatomic, copy) NSArray *steps;
/// 路线途经点列表，成员类型为BMKPlanNode
@property (nonatomic, copy) NSArray <CAMapPlanNode *> *wayPoints;
/// 路线红绿灯个数
@property (nonatomic, assign) NSInteger lightNum;
/// 路线拥堵米数，发起请求时需设置参数 drivingRequestTrafficType = BMK_DRIVING_REQUEST_TRAFFICE_TYPE_PATH_AND_TRAFFICE 才有值
@property (nonatomic, assign) NSInteger congestionMetres;
/// since 5.2.0  此路线道路收费，单位：元(此高速费为预估价格，与实际高速收费并不完全一致)
@property (nonatomic, assign) NSInteger toll;
@end

NS_ASSUME_NONNULL_END
