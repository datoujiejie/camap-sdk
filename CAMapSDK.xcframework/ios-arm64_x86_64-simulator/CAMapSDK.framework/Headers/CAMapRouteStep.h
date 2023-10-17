//
//  CAMapRouteStep.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/9/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAMapRouteStep : NSObject
/// 路段长度 单位： 米
@property (nonatomic, assign) NSInteger distance;
/// 路段耗时 单位： 秒
@property (nonatomic, assign) NSInteger duration;
/// 路段所经过的地理坐标集合
@property (nonatomic) NSArray *points;
/// 路段所经过的地理坐标集合内点的个数
@property (nonatomic, assign) int pointsCount;
/// 该路段起点方向值
@property (nonatomic, copy) NSString *direction;
/// 路段总体指示信息
@property (nonatomic, copy) NSString *instruction;
/// 道路名称 Since 6.3.0
@property (nonatomic, copy) NSString *roadName;
@end

NS_ASSUME_NONNULL_END
