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

@interface M2ViewController : UIViewController <GADInterstitialDelegate, GameCenterManagerDelegate>

@property(nonatomic, strong) GADInterstitial *interstitial;

- (void)updateScore:(NSInteger)score;

- (void)endGame:(BOOL)won;

@end
