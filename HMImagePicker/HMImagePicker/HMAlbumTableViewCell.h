//
//  HMAlbumTableViewCell.h
//  HMImagePicker
//
//  Created by 刘凡 on 16/1/26.
//  Copyright © 2016年 itheima. All rights reserved.
//

#import <UIKit/UIKit.h>
@import Photos;

/// 相册列表单元格
@interface HMAlbumTableViewCell : UITableViewCell
/// 相册资源
@property (nonatomic) PHAssetCollection *assetCollection;
@end
