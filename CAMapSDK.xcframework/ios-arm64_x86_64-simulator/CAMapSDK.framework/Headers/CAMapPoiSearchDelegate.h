//
//  CAMapPoiSearchDelegate.h
//  Pods
//
//  Created by datoujiejie on 2023/8/20.
//

#import <Foundation/Foundation.h>

@class CAMapPOISearch,CAMapPOISearchResult;

///搜索delegate，用于获取搜索结果
@protocol CAMapPoiSearchDelegate<NSObject>
@optional
/**
 *返回POI搜索结果
 *@param searcher 搜索对象
 *@param poiResult 搜索结果列表
 *@param error 错误信息
 */
- (void)onGetPoiResult:(CAMapPOISearch *)searcher result:(CAMapPOISearchResult *)poiResult error:(NSError *)error;
@end
