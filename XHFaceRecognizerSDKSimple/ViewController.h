//
//  ViewController.h
//  XHFaceRecognizerSDKSimple
//
//  Created by 曾 宪华 on 13-12-26.
//  Copyright (c) 2013年 曾宪华 开发团队(http://iyilunba.com ) 本人QQ:543413507. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <XHFaceRecognizerFramework/XHFaceRecognizerView.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) XHFaceRecognizerView *simpleImageView;

- (IBAction)recognizer:(id)sender;
- (IBAction)reset:(id)sender;
- (IBAction)cropped:(id)sender;
@end
