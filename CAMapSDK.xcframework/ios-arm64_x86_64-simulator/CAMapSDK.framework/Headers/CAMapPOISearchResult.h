//
//  CAMapPOISearchResult.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CAMapPoiInfo;

@interface CAMapPOISearchResult : NSObject
/// 符合条件的检索结果总个数
@property (nonatomic, assign) NSInteger totalPOINum;
/// 符合条件的检索结果总页数
@property (nonatomic, assign) NSInteger totalPageNum;
/// 当前页的结果个数
@property (nonatomic, assign) NSInteger curPOINum;
/// 当前页的页数索引
@property (nonatomic, assign) NSInteger curPageIndex;
/// POI列表，成员是BMKPoiInfo
@property (nonatomic, copy) NSArray<CAMapPoiInfo *> *poiInfoList;
@end

NS_ASSUME_NONNULL_END
