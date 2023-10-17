//
//  CAMapDistrictSearchOption.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAMapDistrictSearchOption : NSObject
/// 城市名字（必须）
@property (nonatomic, copy) NSString *city;
/// 区县名字（可选）
@property (nonatomic, copy) NSString *district;
@end

NS_ASSUME_NONNULL_END
