//
//  AppDelegate.swift
//  自定义相册
//
//  Created by 胡永辉 on 16/11/14.
//  Copyright © 2016年 胡永辉. All rights reserved.


#import <UIKit/UIKit.h>

@interface UIImage(ResizeCategory)
-(UIImage*)resizedImageToSize:(CGSize)dstSize;
-(UIImage*)resizedImageToFitInSize:(CGSize)boundingSize scaleIfSmaller:(BOOL)scale;
@end
