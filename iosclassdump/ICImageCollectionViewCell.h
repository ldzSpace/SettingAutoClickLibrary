//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICImagesAndMoviesBaseCell.h"

#import "ICImageAttachmentPresentationDelegate.h"

@class ICFreeTransformGestureRecognizer, ICFreeTransformableViewController, NSString;

@interface ICImageCollectionViewCell : ICImagesAndMoviesBaseCell <ICImageAttachmentPresentationDelegate>
{
    ICFreeTransformGestureRecognizer *_freeTransformGestureRecognizer;
    ICFreeTransformableViewController *_freeTransformableViewController;
}

+ (id)thumbnailCache;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)freeTransformGesture:(id)arg1;
@property(retain, nonatomic) ICFreeTransformGestureRecognizer *freeTransformGestureRecognizer; // @synthesize freeTransformGestureRecognizer=_freeTransformGestureRecognizer;
@property(retain, nonatomic) ICFreeTransformableViewController *freeTransformableViewController; // @synthesize freeTransformableViewController=_freeTransformableViewController;
- (id)image;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 freeTransformEnabled:(_Bool)arg2;
- (void)layoutSubviews;
- (id)newNavigationController;
- (void)prepareForReuse;
- (void)setAttachment:(id)arg1;
- (void)updatePreviewImage;
- (id)viewToPresentAttachmentFrom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

