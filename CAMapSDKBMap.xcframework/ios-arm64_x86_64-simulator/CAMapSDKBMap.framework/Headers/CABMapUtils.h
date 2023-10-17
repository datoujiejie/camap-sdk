//
//  CABMapUtils.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CABMapUtils : NSObject
/**
 处理错误码
 */
+ (NSError *)handleResponseErrorCode:(int)errorCode;
@end

NS_ASSUME_NONNULL_END
