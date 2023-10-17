//
//  CAMapViewAdapter.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/16.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import "CAMapTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface CAMapViewAdapter : NSObject

/// 生成mapview
/// - Parameter frame: 空间大小
- (UIView *)genarateMapViewWithFrame:(CGRect)frame;
/// 当前地图的中心点，改变该值时，地图的比例尺级别不会发生变化
@property (nonatomic, assign) CLLocationCoordinate2D centerCoordinate;
///缩放级别（默认3-19，有室内地图时为3-20）
@property (nonatomic) CGFloat zoomLevel;
/// 显示用户位置
@property (nonatomic) Boolean showUserLocation;

/// 添加多边形
/// - Parameters:
///   - coords: 坐标点
///   - count: 坐标点数量
-(void)addPolygonCoordinates:(CLLocationCoordinate2D *)coords count:(NSUInteger)count;

/// 添加多边形
/// - Parameters:
///   - coords: 直角坐标点
///   - count: 坐标点数量
-(void)addPolygonPoints:(CAMapPoint *)points count:(NSUInteger)count;

/// 设定地图中心点坐标
/// @param coordinate 要设定的地图中心点坐标，用经纬度表示
/// @param animated 是否采用动画效果
- (void)setCenterCoordinate:(CLLocationCoordinate2D)coordinate animated:(BOOL)animated;

/// 添加多边形
/// - Parameters:
///   - polygons: 线数量
-(void)addPolygons:(NSArray *)polygons;
@end

NS_ASSUME_NONNULL_END
