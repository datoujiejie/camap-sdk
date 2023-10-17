//
//  CAMapAddressComponent.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/// 地址基础信息
@interface CAMapAddressComponent : NSObject
/// 国家
@property (nonatomic, copy) NSString *country;

/// 省份名称
@property (nonatomic, copy) NSString *province;

/// 城市名称
@property (nonatomic, copy) NSString *city;

/// 区县名称
@property (nonatomic, copy) NSString *district;

/// 乡镇
@property (nonatomic, copy) NSString *town;

/// 街道名称
@property (nonatomic, copy) NSString *streetName;

/// 街道号码
@property (nonatomic, copy) NSString *streetNumber;

/// 行政区域编码
@property (nonatomic, copy) NSString *adCode;

@end

NS_ASSUME_NONNULL_END
