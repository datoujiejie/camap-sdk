//
//  CAMapSuggestionInfo.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/21.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAMapSuggestionInfo : NSObject
/// 联想词联想词名称
@property (nonatomic, copy) NSString *key;
/// 联想结果经纬度坐标
@property (nonatomic, assign) CLLocationCoordinate2D location;
/// 联想结果唯一标示，ID
@property (nonatomic, copy) NSString *uid;
/// 联想结果所在城市
@property (nonatomic, copy) NSString *city;
/// 联想结果所在区县
@property (nonatomic, copy) NSString *district;
/// 联想结果分类
@property (nonatomic, copy) NSString *tag;
/// 联想结果地址
@property (nonatomic, copy) NSString *address;
@end

NS_ASSUME_NONNULL_END
