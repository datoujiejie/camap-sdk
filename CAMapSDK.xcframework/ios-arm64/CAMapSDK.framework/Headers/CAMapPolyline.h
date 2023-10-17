//
//  CAMapPolyline.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/9/3.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/Corelocation.h>
#import "CAMapTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface CAMapPolyline : NSObject
/// 路段所经过的地理坐标集合
@property (nonatomic) CAMapPoint *points;
/// 路段所经过的地理坐标集合
@property (nonatomic) CLLocationCoordinate2D *coords;

/// 路段所经过的地理坐标集合
@property (nonatomic) int count;
@end

NS_ASSUME_NONNULL_END
