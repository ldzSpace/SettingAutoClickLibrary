//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICBaseAttachmentView.h"

#import "ICAttachmentViewContentFrame.h"
#import "UIGestureRecognizerDelegate.h"

@class ICTextView, NSString;

@interface ICAttachmentView : ICBaseAttachmentView <UIGestureRecognizerDelegate, ICAttachmentViewContentFrame>
{
    _Bool _forManualRendering;
}

+ (void)invalidateAllAttachmentViewsForTextStorage:(id)arg1 layoutManager:(id)arg2;
- (void)addMenuItemsIfNecessary;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)didLongPressAttachment:(id)arg1;
- (void)didTapAttachment:(id)arg1;
- (void)editAttachmentWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) _Bool forManualRendering; // @synthesize forManualRendering=_forManualRendering;
- (struct CGRect)frameForContent;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)icaxActivate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andTextAttachment:(id)arg2 forManualRendering:(_Bool)arg3;
- (id)initWithTextAttachment:(id)arg1 forManualRendering:(_Bool)arg2;
- (void)menuWillHide:(id)arg1;
- (void)openAttachment;
- (void)prepareForPrinting;
- (void)removeFromSuperview;
- (void)requestEditorFirstResponder;
- (void)respondToLongPressGesture:(id)arg1;
- (void)respondToTapGesture:(id)arg1;
- (void)setAttachmentViewType:(short)arg1;
- (void)setupConstraints;
- (void)setupEventHandling;
- (void)share:(id)arg1;
- (void)sharedInit;
- (void)showAttachmentsAsLargePreviews:(id)arg1;
- (void)showAttachmentsAsThumbnails:(id)arg1;
- (void)showMenu;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
@property(readonly, nonatomic) ICTextView *textView;
- (void)updateFirstResponder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

