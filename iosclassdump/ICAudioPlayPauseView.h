//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVAsset, CALayer, ICAttachment, UIImageView;

@interface ICAudioPlayPauseView : UIView
{
    ICAttachment *_audioAttachment;
    CALayer *_backgroundLayer;
    struct UIImageView *_playView;
    struct UIImageView *_pauseView;
}

- (void).cxx_destruct;
- (struct UIImageView *)addSubImageViewForImage:(id)arg1;
@property(readonly, nonatomic) AVAsset *audio;
@property(retain, nonatomic) ICAttachment *audioAttachment; // @synthesize audioAttachment=_audioAttachment;
- (void)audioDidChange;
- (void)audioPlaybackPauseNotification:(id)arg1;
- (void)audioPlaybackPlayNotification:(id)arg1;
- (void)audioPlaybackStopNotification:(id)arg1;
- (void)audioPlaybackTimeChangedNotification:(id)arg1;
- (void)audioWillChange;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
- (void)createBackgroundLayer;
- (void)createPlayPauseViews;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)didPlayToEndNotification:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)pause;
@property(retain, nonatomic) UIImageView *pauseView; // @synthesize pauseView=_pauseView;
- (void)play;
@property(retain, nonatomic) UIImageView *playView; // @synthesize playView=_playView;
- (void)setImageNamed:(id)arg1 onLayer:(id)arg2 adjustLayerSize:(_Bool)arg3;
- (void)sharedInit;
- (void)showPaused;
- (void)showPlaying;
- (void)showPressed:(_Bool)arg1;
- (void)showStopped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tapGesture:(id)arg1;
- (void)tintColorDidChange;
- (void)togglePlayPause;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateTime:(double)arg1 duration:(double)arg2;

@end

