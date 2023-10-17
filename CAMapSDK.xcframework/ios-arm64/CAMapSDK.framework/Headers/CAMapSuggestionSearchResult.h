//
//  CAMapSuggestionSearchResult.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CAMapPoiInfo;

@interface CAMapSuggestionSearchResult : NSObject
/// Sug检索结果列表
@property (nonatomic, copy) NSArray <CAMapPoiInfo *> *suggestionList;
@end

NS_ASSUME_NONNULL_END
