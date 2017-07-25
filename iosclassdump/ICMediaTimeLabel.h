//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class ICMediaTime, ICMediaTimeFormatter;

@interface ICMediaTimeLabel : UILabel
{
    ICMediaTime *_mediaTimeValue;
    ICMediaTimeFormatter *_formatter;
}

- (void).cxx_destruct;
- (void)commonInit;
@property(retain, nonatomic) ICMediaTimeFormatter *formatter; // @synthesize formatter=_formatter;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(copy, nonatomic) ICMediaTime *mediaTimeValue; // @synthesize mediaTimeValue=_mediaTimeValue;

@end
