//
//  M2SettingsViewController.h
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

@protocol M2SettingsViewControllerDelegate <NSObject>
-(void)restartGame;
@end

@interface M2SettingsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
@property (strong, nonatomic) Promo *promo;
@property (nonatomic, weak) id<M2SettingsViewControllerDelegate> delegate;
@end

