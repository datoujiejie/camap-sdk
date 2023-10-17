#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "CABMapInitAdapter.h"
#import "CABMapLocationManagerAdapter.h"
#import "CABMapViewAdapter.h"
#import "CABMapNavAdapter.h"
#import "CABMapRouteSearchAdapter.h"
#import "CABMapDistrictSearchAdapter.h"
#import "CABMapPOISearchAdapter.h"
#import "CABMapSearchAPIAdapter.h"
#import "CABMapSuggestionSearchAdapter.h"
#import "CABMapWeatherSearchAdapter.h"
#import "CABMapToolsAdapter.h"
#import "CABMapUtils.h"

FOUNDATION_EXPORT double CAMapSDKBMapVersionNumber;
FOUNDATION_EXPORT const unsigned char CAMapSDKBMapVersionString[];

