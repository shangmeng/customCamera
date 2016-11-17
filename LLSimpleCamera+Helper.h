//
//  AppDelegate.swift
//  自定义相册
//
//  Created by 胡永辉 on 16/11/14.
//  Copyright © 2016年 胡永辉. All rights reserved.
//

#import "LLSimpleCamera.h"

@interface LLSimpleCamera (Helper)

- (CGPoint)convertToPointOfInterestFromViewCoordinates:(CGPoint)viewCoordinates
                                          previewLayer:(AVCaptureVideoPreviewLayer *)previewLayer
                                                 ports:(NSArray<AVCaptureInputPort *> *)ports;

- (UIImage *)cropImage:(UIImage *)image usingPreviewLayer:(AVCaptureVideoPreviewLayer *)previewLayer;

@end
