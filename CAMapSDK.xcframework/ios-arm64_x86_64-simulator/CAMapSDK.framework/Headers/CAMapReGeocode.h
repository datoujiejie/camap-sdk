//
//  CAMapReGeocode.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/19.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CLLocation.h>

@class CAMapAddressComponent;

NS_ASSUME_NONNULL_BEGIN

@interface CAMapReGeocode : NSObject
/// 地址坐标
@property (nonatomic, assign) CLLocationCoordinate2D location;
/// 地址名称
@property (nonatomic, copy) NSString *address;
/// 地址详情
@property (nonatomic, strong) CAMapAddressComponent *addressDetail;
@end

NS_ASSUME_NONNULL_END
