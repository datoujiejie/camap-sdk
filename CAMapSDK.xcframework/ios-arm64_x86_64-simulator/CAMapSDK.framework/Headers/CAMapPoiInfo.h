//
//  CAMapPoiInfo.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/20.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAMapPoiInfo : NSObject
/// POI名称
@property (nonatomic, copy) NSString *name;
/// POI坐标
@property (nonatomic, assign) CLLocationCoordinate2D pt;
/// POI地址信息
@property (nonatomic, copy) NSString *address;
/// POI电话号码
@property (nonatomic, copy) NSString *phone;
/// POI唯一标识符uid
@property (nonatomic, copy) NSString *UID;
/// POI行政区划代码，设置extensionsAdcode为YES时召回
@property (nonatomic, copy) NSString *adcode;
/// POI所在省份
@property (nonatomic, copy) NSString *province;
/// POI所在城市
@property (nonatomic, copy) NSString *city;
/// POI所在行政区域
@property (nonatomic, copy) NSString *area;
@end

NS_ASSUME_NONNULL_END
