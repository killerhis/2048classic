//
//  M2ViewController.h
//  m2048
//

//  Copyright (c) 2014 Hieshimi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SpriteKit/SpriteKit.h>
#import "GADBannerView.h"
#import "GADRequest.h"
#import "GADInterstitial.h"
#import "GameCenterManager.h"
#import "GAI.h"
#import "GAIFields.h"
#import "GAIDictionaryBuilder.h"
#import "Promo.h"
#import "M2SettingsViewController.h"

@interface M2ViewController : UIViewController <GADInterstitialDelegate, GameCenterManagerDelegate, M2SettingsViewControllerDelegate>

@property(nonatomic, strong) GADInterstitial *interstitial;
@property (strong, nonatomic) Promo *promo;

- (void)updateScore:(NSInteger)score;
- (void)endGame:(BOOL)won;

@end
