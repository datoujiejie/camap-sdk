//
//  CAMapLocation.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/9/2.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAMapLocation : NSObject
@property(nonatomic, copy) CLLocation * _Nullable location;
@end

NS_ASSUME_NONNULL_END
