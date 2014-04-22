//
//  GA_Config.h
//  YTBloothChat
//
//  Created by 黄 伟华 on 4/18/14.
//  Copyright (c) 2014 黄伟华. All rights reserved.
//

#ifndef YTBloothChat_GA_Config_h
#define YTBloothChat_GA_Config_h

#import "GAIDictionaryBuilder.h"
// GA Id
static NSString *const kGaPropertyId = @"UA-50115377-1";
static NSString *const GA_ADMOB_AdID = @"a15354ea725253d";

static NSString *const kGaApplicationName = @"U And Me";
//screen name
static NSString *const kGaHomeScreenName = @"首页";
static NSString *const kGaPhotoScreenName = @"图片";
static NSString *const kGaChatScreenName = @"聊天";


//notification
static NSString * const YT_DISCONNECTION_NOTIFICATION = @"YT_DISCONNECTION_NOTIFICATION";






static void kGaSendEvent(NSString * category, NSString * screen,NSString * action,NSString * label)
{

    id tracker = [[GAI sharedInstance] defaultTracker];
    
    [tracker set:screen value:@"Event"];
    [tracker send:[[GAIDictionaryBuilder createEventWithCategory:category action:action label:label value:nil] build]];
    [tracker set:screen value:nil];
}
#endif
