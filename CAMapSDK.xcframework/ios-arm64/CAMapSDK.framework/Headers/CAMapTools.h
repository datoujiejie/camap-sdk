//
//  CAMapTools.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/22.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

/// 坐标类型
/// CAMAP_COORDTYPE_GPS: GPS设备采集的原始GPS坐标（WGS-84）
/// CAMAP_COORDTYPE_COMMON: GCJ坐标，google地图、soso地图、aliyun地图、mapabc地图和amap地图所用坐标
/// CAMAP_COORDTYPE_BD09LL: 百度经纬度坐标
typedef NS_ENUM(NSUInteger, CAMAP_COORD_TYPE) {
    CAMAP_COORDTYPE_GPS = 0,
    CAMAP_COORDTYPE_COMMON,
    CAMAP_COORDTYPE_BD09LL,
};

@interface CAMapTools : NSObject

/// 距离测量
/// - Parameters:
///   - start: 起始点
///   - end: 结束点
+(CLLocationDistance)getDistance:(CLLocationCoordinate2D)start end:(CLLocationCoordinate2D)end;

/// 坐标系转换
/// - Parameters:
///   - coord: 坐标
///   - type: 坐标类型
+(CLLocationCoordinate2D)convert:(CLLocationCoordinate2D)coord type:(CAMAP_COORD_TYPE)type;

@end

NS_ASSUME_NONNULL_END
