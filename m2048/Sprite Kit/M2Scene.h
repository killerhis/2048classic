//
//  M2Scene.h
//  m2048
//

//  Copyright (c) 2014 Hieshimi. All rights reserved.
//

@import SpriteKit;
@class M2Grid;
@class M2ViewController;
#import <AVFoundation/AVFoundation.h>

@interface M2Scene : SKScene <AVAudioPlayerDelegate>

@property (nonatomic, weak) M2ViewController *controller;
@property (strong, nonatomic) AVAudioPlayer* theAudio;

- (void)startNewGame;

- (void)loadBoardWithGrid:(M2Grid *)grid;

@end
