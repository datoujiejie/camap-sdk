//
//  CAMapRouteSearchDelegate.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/27.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@class CAMapDrivingRouteResult;


/// 路线规划Delegate
@protocol CAMapRouteSearchDelegate <NSObject>
/**
 *返回驾乘搜索结果
 *@param searcher 搜索对象
 *@param result 搜索结果，类型为BMKDrivingRouteResult
 *@param error 错误号，@see BMKSearchErrorCode
 */
- (void)onGetDrivingRouteResult:(id)searcher result:(CAMapDrivingRouteResult *)result error:(NSError *)error;
@end
NS_ASSUME_NONNULL_END
