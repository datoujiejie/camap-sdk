//
//  CAMapRouteNode.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/27.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/Corelocation.h>
#import "CAMapTypes.h"
NS_ASSUME_NONNULL_BEGIN

/// 节点
@interface CAMapRouteNode : NSObject
/// 该节点uid
@property (nonatomic, copy) NSString *uid;
/// 该节点的名称
@property (nonatomic, copy) NSString *title;
/// 该节点的坐标
@property (nonatomic, assign) CLLocationCoordinate2D location;
/// 该节点的直角坐标
@property (nonatomic, assign) CAMapPoint point;
@end

NS_ASSUME_NONNULL_END
