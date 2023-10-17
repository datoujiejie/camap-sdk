//
//  CAMapBoundSearchOption.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/20.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN


/// POI多边形搜索
@interface CAMapBoundSearchOption : NSObject
/**
 检索关键字，必选。
 在矩形检索中关键字为数组类型，可以支持多个关键字并集检索，如银行和酒店。每个关键字对应数组一个元素。
 最多支持10个关键字。
 */
@property (nonatomic, copy) NSArray<NSString *> *keywords;
/// 矩形检索区域的左下角经纬度坐标，必选
@property (nonatomic, assign) CLLocationCoordinate2D leftBottom;
/// 矩形检索区域的右上角经纬度坐标，必选
@property (nonatomic, assign) CLLocationCoordinate2D rightTop;
/// 分页页码，默认为0,0代表第一页，1代表第二页，以此类推
@property (nonatomic, assign) NSInteger pageIndex;
/// 单次召回POI数量，默认为10条记录，最大返回20条。
@property (nonatomic, assign) NSInteger pageSize;
@end

NS_ASSUME_NONNULL_END
