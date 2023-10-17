//
//  CAMapLocationManagerDelegate.h
//  Pods
//
//  Created by datoujiejie on 2023/9/2.
//

#ifndef CAMapLocationManagerDelegate_h
#define CAMapLocationManagerDelegate_h
@class CAMapLocation;
@protocol CAMapLocationManagerDelegate <NSObject>
- (void)CAMapLocationManager:(id)manager didUpdateLocation:(CAMapLocation *)location orError:(NSError *)error;
@end

#endif /* CAMapLocationManagerDelegate_h */
