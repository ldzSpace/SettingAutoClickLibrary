//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICSplitViewController, UIViewController;

@protocol ICSplitViewControllerDelegate <NSObject>
- (void)icSplitViewController:(ICSplitViewController *)arg1 didShowNoteEditorController:(UIViewController *)arg2;
- (_Bool)icSplitViewController:(ICSplitViewController *)arg1 shouldCollapseNoteEditorController:(UIViewController *)arg2;
@end

