//
//  CAMAPGeoCodeSearchDelegate.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class CAMapGeocodeSearchResult;
@class CAMapReGeocode;
@class CAMapDistrictSearchResult;
@class CAMapSuggestionSearchResult;
@class CAMapWeatherSearchResult;

@protocol CAMAPGeoCodeSearchDelegate<NSObject>

@optional

/**
 * @brief 地理编码查询回调函数
 * @param request  发起的请求
 * @param result 响应结果
 * @param error 错误信息
 */
- (void)onGeocodeSearchDone:(id)request result:(CAMapGeocodeSearchResult *)result error:(NSError *)error;

/**
 * @brief 逆地理编码查询回调函数
 * @param request  发起的请求
 * @param result 响应结果
 * @param error 错误信息
 */
- (void)onReverseGeocodeSearchDone:(id)request result:(CAMapReGeocode *)result error:(NSError *)error;

@end

@protocol CAMapDistrictSearchDelegate<NSObject>

/**
 *返回区域搜索结果
 *@param searcher 搜索对象
 *@param result 搜索结果列表
 *@param error 错误信息
 */
- (void)onGetDistrictResult:(id)searcher result:(CAMapDistrictSearchResult *)result error:(NSError *)error;

@end

@protocol CAMapSuggestionSearchDelegate<NSObject>

/**
 *返回输入提示搜索结果
 *@param searcher 搜索对象
 *@param result 搜索结果列表
 *@param error 错误信息
 */
- (void)onGetSuggestionResult:(id)searcher result:(CAMapSuggestionSearchResult *)result error:(NSError *)error;

@end

///搜索delegate，用于获取搜索结果
@protocol CAMapWeatherSearchDelegate <NSObject>
@optional
/**
 *返回Weather搜索结果
 *@param searcher 搜索对象
 *@param result 搜索结果
 *@param error 错误号，@see BMKSearchErrorCode
 */
- (void)onGetWeatherResult:(id)searcher result:(CAMapWeatherSearchResult *)result error:(NSError *)error;

@end


NS_ASSUME_NONNULL_END
