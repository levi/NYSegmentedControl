//
//  NYSegmentIndicator.h
//  NYSegmentedControl
//
//  Copyright (c) 2014 Nealon Young. All rights reserved.
//
//  https://github.com/nealyoung/NYSegmentedControl
//

#import <UIKit/UIKit.h>
#import "NYSegmentedControl.h"

@interface NYSegmentIndicator : UIView <NYSegmentIndicatorProtocol>

@property (nonatomic) CGFloat cornerRadius;

@property (nonatomic) CGFloat borderWidth;
@property (nonatomic) UIColor *borderColor;

@property (nonatomic) BOOL drawsGradientBackground;
@property (nonatomic) UIColor *gradientTopColor;
@property (nonatomic) UIColor *gradientBottomColor;

@end
