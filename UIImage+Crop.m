//
//  AppDelegate.swift
//  自定义相册
//
//  Created by 胡永辉 on 16/11/14.
//  Copyright © 2016年 胡永辉. All rights reserved.
//

#import "UIImage+Crop.h"

@implementation UIImage(CropCategory)
- (UIImage *)crop:(CGRect)rect {

    rect = CGRectMake(rect.origin.x * self.scale,
                      rect.origin.y * self.scale,
                      rect.size.width * self.scale,
                      rect.size.height * self.scale);
    
    CGImageRef imageRef = CGImageCreateWithImageInRect(self.CGImage, rect);
    UIImage *result = [UIImage imageWithCGImage:imageRef scale:self.scale orientation:self.imageOrientation];
    CGImageRelease(imageRef);
    return result;
}
@end
