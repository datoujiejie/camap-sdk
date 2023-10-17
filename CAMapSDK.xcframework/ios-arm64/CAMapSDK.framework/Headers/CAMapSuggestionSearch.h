//
//  CAMapSuggestionSearch.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CAMapSuggestionSearchOption;
@protocol CAMapSuggestionSearchDelegate;

@interface CAMapSuggestionSearch : NSObject
@property (nonatomic, weak) id<CAMapSuggestionSearchDelegate> delegate;
/**
 *搜索建议检索
 *@param suggestionSearchOption       sug检索信息类
 *异步函数，返回结果在BMKSuggestionSearchDelegate的onGetSuggestionResult通知
 */
- (void)suggestionSearch:(CAMapSuggestionSearchOption *)suggestionSearchOption;
@end

NS_ASSUME_NONNULL_END
