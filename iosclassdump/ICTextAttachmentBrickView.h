//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICAttachmentView.h"

@class ICAttachmentBrickView;

@interface ICTextAttachmentBrickView : ICAttachmentView
{
    ICAttachmentBrickView *_brickView;
}

+ (Class)brickViewClass;
- (void).cxx_destruct;
- (struct CGSize)attachmentSizeForTextContainer:(id)arg1;
@property(retain, nonatomic) ICAttachmentBrickView *brickView; // @synthesize brickView=_brickView;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (void)didChangeAttachment;
- (void)setupConstraints;
- (void)sharedInit;

@end

