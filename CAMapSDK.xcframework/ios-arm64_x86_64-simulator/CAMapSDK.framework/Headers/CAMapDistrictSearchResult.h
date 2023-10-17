//
//  CAMapDistrictSearchResult.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/21.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAMapDistrictSearchResult : NSObject
/// 行政区域编码
@property (nonatomic, copy)  NSString *code;
/// 行政区域名称
@property (nonatomic, copy) NSString *name;
/// 行政区域中心点
@property (nonatomic, assign) CLLocationCoordinate2D center;
/// 行政区边界直角地理坐标点数据(NSString数组，字符串数据格式为: @"x,y;x,y")
@property (nonatomic, copy) NSArray<NSString *> *paths;
@end

NS_ASSUME_NONNULL_END
