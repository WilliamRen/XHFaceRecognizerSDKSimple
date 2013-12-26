//
//  XHFaceRecognizerView.h
//  XHFaceRecognizer
//
//  Created by 曾 宪华 on 13-12-24.
//  Copyright (c) 2013年 曾宪华 开发团队(http://iyilunba.com ) 本人QQ:543413507. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XHFaceRecognizerView;
@class XHFacePosition;

typedef void(^FaceCropCompelted)(UIImage *croppedImage, NSError *error);
@protocol XHFaceRecognizerViewDelegate <NSObject>

- (void)faceViewWillRecognizer:(XHFaceRecognizerView *)faceView;
- (void)faceViewDidFinishRecognizer:(XHFaceRecognizerView *)faceView;
- (void)faceViewRecognizerFail:(NSError *)error;

@end


@interface XHFaceRecognizerView : UIView

@property (nonatomic, weak, readonly) XHFacePosition *facePosition;

@property (nonatomic, assign) id <XHFaceRecognizerViewDelegate> delegate;
@property (nonatomic, assign) CGFloat magnifyingGlassShowDelay; // default is 0.2s
@property (nonatomic, assign) BOOL showCropping; // default is NO

+ (UIImage *)scaleAndRotateImage:(UIImage *)image;

- (void)startFaceRecognizer;
- (void)croppingFaceWtihFaceCropCompelted:(FaceCropCompelted)faceCropCompelted;
- (void)resetNormalImage:(UIImage *)originImage;

@end
