//
//  M2Overlay.h
//  m2048
//
//  Created by Hicham Chourak on 3/25/14.
//  Copyright (c) 2014 Hieshimi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface M2Overlay : UIView

@property (nonatomic, weak) IBOutlet UILabel *message;

@property (nonatomic, weak) IBOutlet UIButton *keepPlaying;

@property (nonatomic, weak) IBOutlet UIButton *restartGame;

@end
