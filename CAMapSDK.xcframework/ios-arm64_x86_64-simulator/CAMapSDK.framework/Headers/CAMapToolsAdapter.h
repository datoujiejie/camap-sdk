//
//  CAMapToolsAdapter.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/24.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAMapToolsAdapter : NSObject
+(CLLocationDistance)getDistance:(CLLocationCoordinate2D)start end:(CLLocationCoordinate2D)end;

+(CLLocationCoordinate2D)convert:(CLLocationCoordinate2D)coord type:(NSUInteger)type;
@end

NS_ASSUME_NONNULL_END
