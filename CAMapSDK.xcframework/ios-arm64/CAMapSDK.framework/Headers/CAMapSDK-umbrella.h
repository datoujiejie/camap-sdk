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

#import "CAMapDistrictSearchAdapter.h"
#import "CAMapInitAdapter.h"
#import "CAMapLocationManagerAdapter.h"
#import "CAMapNavAdapter.h"
#import "CAMapPOISearchAdapter.h"
#import "CAMapRouteSearchAdapter.h"
#import "CAMapSearchAPIAdapter.h"
#import "CAMapSuggestionSearchAdapter.h"
#import "CAMapToolsAdapter.h"
#import "CAMapViewAdapter.h"
#import "CAMapWeatherSearchAdapter.h"
#import "CAMapAddressComponent.h"
#import "CAMapConfig.h"
#import "CAMapTypes.h"
#import "CAMapLocation.h"
#import "CAMapLocationManager.h"
#import "CAMapLocationManagerDelegate.h"
#import "CAMapPolyline.h"
#import "CAMapView.h"
#import "CAMapNavInfo.h"
#import "CAMapNavOption.h"
#import "CAMapDrivingRouteLine.h"
#import "CAMapDrivingRoutePlanOption.h"
#import "CAMapDrivingRouteResult.h"
#import "CAMapPlanNode.h"
#import "CAMapRouteNode.h"
#import "CAMapRouteSearch.h"
#import "CAMapRouteSearchDelegate.h"
#import "CAMapRouteStep.h"
#import "CAMapBoundSearchOption.h"
#import "CAMapDistrictSearch.h"
#import "CAMapDistrictSearchOption.h"
#import "CAMapDistrictSearchResult.h"
#import "CAMapGeocode.h"
#import "CAMapGeoCodeSearch.h"
#import "CAMapGeoCodeSearchOption.h"
#import "CAMapGeocodeSearchResult.h"
#import "CAMapPOICitySearchOption.h"
#import "CAMapPoiInfo.h"
#import "CAMapPOINearbySearchOption.h"
#import "CAMapPOISearch.h"
#import "CAMapPoiSearchDelegate.h"
#import "CAMapPOISearchResult.h"
#import "CAMapReGeocode.h"
#import "CAMapReGeoCodeSearchOption.h"
#import "CAMAPSearchDelegate.h"
#import "CAMapSuggestionInfo.h"
#import "CAMapSuggestionSearch.h"
#import "CAMapSuggestionSearchOption.h"
#import "CAMapSuggestionSearchResult.h"
#import "CAMapWeatherForecast.h"
#import "CAMapWeatherLive.h"
#import "CAMapWeatherSearch.h"
#import "CAMapWeatherSearchOption.h"
#import "CAMapWeatherSearchResult.h"
#import "CAMapTools.h"
#import "CAMapUtils.h"

FOUNDATION_EXPORT double CAMapSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char CAMapSDKVersionString[];

