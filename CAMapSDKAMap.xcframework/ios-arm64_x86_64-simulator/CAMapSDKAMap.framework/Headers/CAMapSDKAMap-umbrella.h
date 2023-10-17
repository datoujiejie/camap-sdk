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

#import "CAAMapInitAdapter.h"
#import "CAAMapLocationManagerAdapter.h"
#import "CAAMapViewAdapter.h"
#import "CAAMapNavAdapter.h"
#import "CAAMapRouteSearchAdapter.h"
#import "CAAMapDistrictSearchAdapter.h"
#import "CAAMapPOISearchAdapter.h"
#import "CAAMapSearchAPIAdapter.h"
#import "CAAMapSuggestionSearchAdapter.h"
#import "CAAMapWeatherSearchAdapter.h"
#import "CAAMapToolsAdapter.h"
#import "CAAMapUtils.h"

FOUNDATION_EXPORT double CAMapSDKAMapVersionNumber;
FOUNDATION_EXPORT const unsigned char CAMapSDKAMapVersionString[];

