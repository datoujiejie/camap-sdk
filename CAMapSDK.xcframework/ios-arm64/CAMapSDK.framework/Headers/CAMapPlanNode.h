//
//  CAMapPlanNode.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/27.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/Corelocation.h>

NS_ASSUME_NONNULL_BEGIN

/// 路线规划节点
@interface CAMapPlanNode : NSObject
/// 节点坐标
@property (nonatomic, assign) CLLocationCoordinate2D pt;
@end

NS_ASSUME_NONNULL_END
