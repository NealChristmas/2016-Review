//
//  AppDelegate.h
//  使用NSUrlSession实现后台下载功能
//
//  Created by 张凯泽 on 16/3/10.
//  Copyright © 2016年 rytong_zkz. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^backgroundTransferCompletionHandler)() ;
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property(nonatomic,copy)backgroundTransferCompletionHandler backgroundTransferCompletionHandler;
@property(nonatomic,weak)id <NSURLSessionDelegate>sessionDelegate;

@end

