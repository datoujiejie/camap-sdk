//
//  CAMapPOICitySearchOption.h
//  CAMapSDK
//
//  Created by datoujiejie on 2023/8/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CAMapPOICitySearchOption : NSObject
/// 检索关键字，必选。举例：天安门
@property (nonatomic, copy) NSString *keyword;
/// 区域名称(市或区的名字，如北京市，海淀区)或区域编码，必选
@property (nonatomic, copy) NSString *city;
/// 区域数据返回限制，可选，为true时，仅返回city对应区域内数据
@property (nonatomic, assign) BOOL cityLimit;
/// 分页页码，默认为0,0代表第一页，1代表第二页，以此类推
@property (nonatomic, assign) NSInteger pageIndex;
/// 单次召回POI数量，默认为10条记录，最大返回20条。
@property (nonatomic, assign) NSInteger pageSize;
@end

NS_ASSUME_NONNULL_END
