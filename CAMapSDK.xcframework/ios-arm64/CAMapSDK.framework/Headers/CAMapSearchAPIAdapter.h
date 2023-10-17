//
//  AMapSearchAPIAdapter.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/12.
//

#import <Foundation/Foundation.h>
@class CAMapGeoCodeSearchOption;
@class CAMapReGeoCodeSearchOption;
@protocol CAMAPGeoCodeSearchDelegate;

NS_ASSUME_NONNULL_BEGIN


/// 搜索基类，对应渠道地图适配
@interface CAMapSearchAPIAdapter : NSObject
@property (nonatomic, weak) id<CAMAPGeoCodeSearchDelegate> delegate;
/**
 * @brief 地址编码查询接口
 * @param geo 查询选项。具体属性字段请参考 CAMapGeoCodeSearchOption 类。
 */
-(void)geoCodeSearch:(CAMapGeoCodeSearchOption *)geo;
/// 根据地理坐标获取地址信息
/// @param geo 反geo检索信息类
-(void)reverseGeoCodeSearch:(CAMapReGeoCodeSearchOption *)geo;
@end

NS_ASSUME_NONNULL_END
