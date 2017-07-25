//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol UIWebFindOnPageHighlighter <NSObject>
@property(nonatomic) id <UIWebFindOnPageHighlighterDelegate> delegate;
- (void)highlightNextMatch;
- (void)highlightPreviousMatch;
@property(readonly, nonatomic) unsigned long long highlightedMatchIndex;
@property(readonly, nonatomic) unsigned long long numberOfMatches;
@property(readonly, copy, nonatomic) NSString *searchText;
- (void)setSearchText:(NSString *)arg1 matchLimit:(unsigned long long)arg2;
- (void)setSelectionRect:(struct CGRect)arg1 textRects:(NSArray *)arg2 contentViews:(NSArray *)arg3 wobble:(_Bool)arg4;
@end

