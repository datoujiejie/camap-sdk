//
//  CAMAPReGeoCodeSearchOption.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/19.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CLLocation.h>

NS_ASSUME_NONNULL_BEGIN

/// 逆地理编码参数
@interface CAMapReGeoCodeSearchOption : NSObject
/// 待解析的经纬度坐标（必选）
@property (nonatomic, assign) CLLocationCoordinate2D location;
/// 设置POI召回半径，允许设置区间为0-1000米，超过1000米按1000米召回，默认为1000米
@property (nonatomic, assign) int radius;
@end

NS_ASSUME_NONNULL_END
