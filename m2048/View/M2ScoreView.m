//
//  M2ScoreView.m
//  m2048
//
//  Created by Hicham Chourak on 3/23/14.
//  Copyright (c) 2014 Hieshimi. All rights reserved.
//

#import "M2ScoreView.h"

@implementation M2ScoreView

- (instancetype)initWithFrame:(CGRect)frame
{
  if (self = [super initWithFrame:frame]) {
    [self commonInit];
  }
  return self;
}


- (instancetype)initWithCoder:(NSCoder *)aDecoder
{
  if (self = [super initWithCoder:aDecoder]) {
    [self commonInit];
  }
  return self;
}


- (void)commonInit
{
  self.layer.cornerRadius = GSTATE.cornerRadius;
  self.layer.masksToBounds = YES;
  self.backgroundColor = [UIColor greenColor];
}


- (void)updateAppearance
{
  self.backgroundColor = [GSTATE scoreBoardColor];
    
    if ( UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad )
    {
        // Device is iPad
        self.title.font = [UIFont fontWithName:[GSTATE boldFontName] size:24];
        self.score.font = [UIFont fontWithName:[GSTATE regularFontName] size:32];
        
    } else {
        self.title.font = [UIFont fontWithName:[GSTATE boldFontName] size:12];
        self.score.font = [UIFont fontWithName:[GSTATE regularFontName] size:16];
    }
  
}

/*
 // Only override drawRect: if you perform custom drawing.
 // An empty implementation adversely affects performance during animation.
 - (void)drawRect:(CGRect)rect
 {
 // Drawing code
 }
 */

@end
