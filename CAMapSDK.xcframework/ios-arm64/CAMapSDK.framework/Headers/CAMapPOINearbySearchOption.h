//
//  CAMapPOINearbySearchOption.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/20.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CLLocation.h>

NS_ASSUME_NONNULL_BEGIN


/// 周边搜索
@interface CAMapPOINearbySearchOption : NSObject
/**
 检索关键字，必选。
 在周边检索中关键字为数组类型，可以支持多个关键字并集检索，如银行和酒店。每个关键字对应数组一个元素。
 最多支持10个关键字。
 */
@property (nonatomic, copy) NSArray<NSString *> *keywords;
/// 检索中心点的经纬度，必选
@property (nonatomic, assign) CLLocationCoordinate2D location;
/**
 检索半径，可选，单位是米。
 当半径过大，超过中心点所在城市边界时，会变为城市范围检索，检索范围为中心点所在城市
 */
@property (nonatomic, assign) NSInteger radius;
/// 分页页码，默认为0,0代表第一页，1代表第二页，以此类推
@property (nonatomic, assign) NSInteger pageIndex;
/// 单次召回POI数量，默认为10条记录，最大返回20条。
@property (nonatomic, assign) NSInteger pageSize;
@end

NS_ASSUME_NONNULL_END
