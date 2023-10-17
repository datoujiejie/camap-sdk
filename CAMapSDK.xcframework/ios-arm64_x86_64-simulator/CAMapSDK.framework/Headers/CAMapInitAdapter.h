//
//  CAMapInitAdapter.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 初始化基类
@interface CAMapInitAdapter : NSObject
- (void)initWithApiKey:(NSString *)apiKey;
/// 是否显示隐私政策
/// - Parameter show: 是否显示
+(void)showPrivacy:(Boolean)show;

/// 是否同意隐私政策
/// - Parameter show: 是否同意
+(void)agreePrivacy:(Boolean)agree;
@end

NS_ASSUME_NONNULL_END
