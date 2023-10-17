//
//  CAMapGeocodeSearchResult.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CAMapGeocode;

@interface CAMapGeocodeSearchResult : NSObject
///地理编码结果 AMapGeocode 数组
@property (nonatomic, strong) NSArray<CAMapGeocode *> *geocodes;
@end

NS_ASSUME_NONNULL_END
