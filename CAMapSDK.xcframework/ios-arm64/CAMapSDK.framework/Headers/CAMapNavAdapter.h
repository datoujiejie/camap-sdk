//
//  CAMapNavAdapter.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/9/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CAMapNavOption;

@interface CAMapNavAdapter : NSObject
- (void)starNavi:(CAMapNavOption *)navOption;
@end

NS_ASSUME_NONNULL_END
