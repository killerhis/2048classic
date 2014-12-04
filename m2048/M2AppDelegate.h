//
//  M2AppDelegate.h
//  m2048
//
//  Created by Hicham Chourak on 3/16/14.
//  Copyright (c) 2014 Hieshimi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GAI.h"
#import "GAIFields.h"
#import "GAIDictionaryBuilder.h"
#import "Promo.h"

@interface M2AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) NSNumber *appID;
@property (strong, nonatomic) Promo *promo;

@end
