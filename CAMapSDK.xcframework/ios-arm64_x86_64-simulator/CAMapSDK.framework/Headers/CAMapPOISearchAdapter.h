//
//  CAMapPOISearchAdapter.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CAMapPOICitySearchOption;
@class CAMapBoundSearchOption;
@class CAMapPOINearbySearchOption;
@protocol CAMapPoiSearchDelegate;

@interface CAMapPOISearchAdapter : NSObject
@property (nonatomic, weak) id<CAMapPoiSearchDelegate> delegate;
/**
 *城市POI检索
 *异步函数，返回结果在CAMapPoiSearchDelegate的onGetPoiResult通知
 *@param option 城市内搜索的搜索参数类（CAMapPOICitySearchOption）
 */
- (void)poiSearchInCity:(CAMapPOICitySearchOption *)option;

/**
 *根据范围和检索词发起范围检索
 *异步函数，返回结果在CAMapPoiSearchDelegate的onGetPoiResult通知
 *@param option 范围搜索的搜索参数类（CAMapBoundSearchOption）
 */
- (void)poiSearchInbounds:(CAMapBoundSearchOption *)option;
/**
 *根据中心点、半径和检索词发起周边检索
 *异步函数，返回结果在CAMapPoiSearchDelegate的onGetPoiResult通知
 *@param option 周边搜索的搜索参数类（CAMapNearbySearchOption）
 *index 页码，如果是第一次发起搜索，填0，根据返回的结果可以去获取第n页的结果，页码从0开始
 */
- (void)poiSearchNearBy:(CAMapPOINearbySearchOption *)option;
@end

NS_ASSUME_NONNULL_END
