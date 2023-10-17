//
//  CAMapDrivingRoutePlanOption.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/27.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@class CAMapPlanNode;

typedef enum {
    CAMAP_DRIVING_BLK_FIRST = -1, /// 躲避拥堵(自驾)
    CAMAP_DRIVING_TIME_FIRST = 0,    /// 最短时间(自驾)
    CAMAP_DRIVING_DIS_FIRST = 1,    /// 最短路程(自驾)
    CAMAP_DRIVING_FEE_FIRST        /// 少走高速(自驾)
} CAMAPDrivingPolicy;

typedef enum {
    CAMAP_DRIVING_CAR_NORMAL = 0, /// 普通车
    CAMAP_DRIVING_CAR_TRUCK = 1    /// 货车
} CAMAPDrivingCarType;

/// 路线搜索配置
@interface CAMapDrivingRoutePlanOption : NSObject
/// 检索的起点，可通过坐标方式指定。
@property (nonatomic, assign) CLLocationCoordinate2D from;
/// 检索的起点，可通过坐标方式指定。
@property (nonatomic, assign) CLLocationCoordinate2D to;
/// 驾车途经点
@property (nonatomic, copy) NSArray <CAMapPlanNode *> *wayPointsArray;

///驾车检索策略，默认使用BMK_DRIVING_TIME_FIRST
@property (nonatomic, assign) CAMAPDrivingPolicy drivingPolicy;

/// 类型 驾车or货车
@property (nonatomic, assign) CAMAPDrivingCarType carType;

/// 货车参数
@property (nonatomic, strong) NSDictionary *truckParameters;
@end

NS_ASSUME_NONNULL_END
