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

#import "CATMapInitAdapter.h"
#import "CATMapLocationManagerAdapter.h"
#import "CATMapViewAdapter.h"
#import "CATMapNavAdapter.h"
#import "CATMapRouteSearchAdapter.h"
#import "CATMapDistrictSearchAdapter.h"
#import "CATMapPOISearchAdapter.h"
#import "CATMapSearchAPIAdapter.h"
#import "CATMapSuggestionSearchAdapter.h"
#import "CATMapToolsAdapter.h"
#import "CATMapUtils.h"

FOUNDATION_EXPORT double CAMapSDKTMapVersionNumber;
FOUNDATION_EXPORT const unsigned char CAMapSDKTMapVersionString[];

