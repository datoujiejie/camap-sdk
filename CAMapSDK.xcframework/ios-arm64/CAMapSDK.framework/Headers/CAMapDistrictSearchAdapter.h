//
//  CAMapDistrictSearchAdapter.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/21.
//

#import <Foundation/Foundation.h>
@class CAMapDistrictSearchOption;

NS_ASSUME_NONNULL_BEGIN

@protocol CAMapDistrictSearchDelegate;

@interface CAMapDistrictSearchAdapter : NSObject
@property (nonatomic, weak) id<CAMapDistrictSearchDelegate> delegate;
/**
 *行政区域检索
 *异步函数，返回结果在BMKDistrictSearchDelegate的onGetDistrictResult通知
 *@param districtSearchOption 公交线路检索信息类
 */
- (void)districtSearch:(CAMapDistrictSearchOption *)districtSearchOption;
@end

NS_ASSUME_NONNULL_END
