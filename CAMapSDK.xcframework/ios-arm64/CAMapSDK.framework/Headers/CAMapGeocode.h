//
//  CAMapGeocode.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/12.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CLLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAMapGeocode : NSObject
///坐标点
@property (nonatomic, assign) CLLocationCoordinate2D location;
///匹配的等级
@property (nonatomic, copy) NSString     *level;
@end

NS_ASSUME_NONNULL_END
