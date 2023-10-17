//
//  CAMapLocationManagerAdapter.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/9/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CAMapLocationManagerDelegate;

@interface CAMapLocationManagerAdapter : NSObject
@property (nonatomic, weak) id<CAMapLocationManagerDelegate> delegate;
// 开始定位
-(void)startUpdatingLocation;
// 停止定位
-(void)stopUpdatingLocation;
@end

NS_ASSUME_NONNULL_END
