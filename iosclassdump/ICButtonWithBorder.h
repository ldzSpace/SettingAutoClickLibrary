//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface ICButtonWithBorder : UIButton
{
    _Bool _fillWhenHighlighted;
}

- (void)addAnimationToSetBackgroundColor:(struct CGColor *)arg1;
- (void)addAnimationToSetBorderColor:(struct CGColor *)arg1;
- (void)awakeFromNib;
@property(nonatomic) _Bool fillWhenHighlighted; // @synthesize fillWhenHighlighted=_fillWhenHighlighted;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;

@end

