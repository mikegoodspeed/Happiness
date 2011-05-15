//
//  HappinessAppDelegate.h
//  Happiness
//
//  Created by Mike Goodspeed on 5/15/11.
//  Copyright 2011 Mike Goodspeed. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HappinessViewController.h"

@interface HappinessAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window_;
    HappinessViewController *viewController_;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet HappinessViewController *viewController;

@end
