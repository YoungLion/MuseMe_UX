//
//  MuseMeDelegate.h
//  MuseMe
//
//  Created by Yong Lin on 7/6/12.
//  Copyright (c) 2012 MuseMe Inc. All rights reserved.
//

#import <UIKit/UIKit.h>


#import <Quartzcore/Quartzcore.h>
#import "MuseMeActivityIndicator.h"


#define IDOfPollToBeShown @"IDOfPollToBeShown"
#define CURRENTUSERID @"currentUserID"
#define IS_OLD_USER @"isOldUser"
#define UNREAD_NOTIFICATION_COUNT_KEY @"unreadNotificationCount"
#define SINGLE_ACCESS_TOKEN_KEY @"singleAccessTokenKey"
#define DEVICE_TOKEN_KEY @"DeviceToken"
#define UNREAD_NOTIFICATION_COUNT_KEY @"unreadNotificationCount"



@interface MuseMeDelegate : UIResponder 

@property (strong, nonatomic) UIWindow *window;

@end
