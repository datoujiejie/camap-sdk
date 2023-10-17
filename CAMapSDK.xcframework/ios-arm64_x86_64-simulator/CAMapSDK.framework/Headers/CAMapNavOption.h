//
//  CAMapRouteOption.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/9/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class CAMapNavInfo;

@interface CAMapNavOption : NSObject
/// 检索的起点，可通过坐标方式指定。
@property (nonatomic, strong) CAMapNavInfo *from;
/// 检索的起点，可通过坐标方式指定。
@property (nonatomic, strong) CAMapNavInfo *to;
/// 驾车途经点
@property (nonatomic, copy) NSArray <CAMapNavInfo *> *wayPointsArray;
@end

NS_ASSUME_NONNULL_END
