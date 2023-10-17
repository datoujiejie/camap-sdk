//
//  CAMapNavInfo.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/9/8.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAMapNavInfo : NSObject
/// 检索的起点，可通过坐标方式指定。
@property (nonatomic, assign) CLLocationCoordinate2D coordinate;
// 该地点的唯一标识，即poi id
@property (nonatomic, copy) NSString *poiID;
@end

NS_ASSUME_NONNULL_END
