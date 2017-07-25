//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSDate, NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;

@interface NoteCell : UITableViewCell
{
    _Bool _showsChevron;
    NSString *_title;
    NSDate *_date;
    NSArray *_highlightedTerms;
    long long _layoutStyle;
    NSArray *_layoutStyleSpecificConstraints;
    UILabel *_titleLabel;
    UILabel *_dateLabel;
    UIView *_contentGuide;
    UIImageView *_defaultAccessoryView;
    NSLayoutConstraint *_leftMarginConstraint;
    NSLayoutConstraint *_rightMarginConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
    NSLayoutConstraint *_topMarginConstraint;
    struct UIEdgeInsets _contentInsets;
}

+ (void)clearCachedFontsAndAttributes;
+ (void)contentSizeCategoryChanged:(id)arg1;
+ (id)dateBaseAttributes;
+ (id)dateBaseFont;
+ (double)heightEstimationForContentSizeCategory:(id)arg1;
+ (void)initialize;
+ (long long)layoutStyleForPreferredContentSizeCategory:(id)arg1;
+ (void)setupCachedFontsAndAttributes;
+ (id)titleBaseAttributes;
+ (id)titleBaseFont;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property(retain, nonatomic) UIView *contentGuide; // @synthesize contentGuide=_contentGuide;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)contentSizeCategoryChanged:(id)arg1;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void)dealloc;
@property(retain, nonatomic) UIImageView *defaultAccessoryView; // @synthesize defaultAccessoryView=_defaultAccessoryView;
@property(copy, nonatomic) NSArray *highlightedTerms; // @synthesize highlightedTerms=_highlightedTerms;
- (id)highlightedTitleForTitle:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic) NSArray *layoutStyleSpecificConstraints; // @synthesize layoutStyleSpecificConstraints=_layoutStyleSpecificConstraints;
@property(retain, nonatomic) NSLayoutConstraint *leftMarginConstraint; // @synthesize leftMarginConstraint=_leftMarginConstraint;
- (void)prepareSpecificConstraintsForStyle:(long long)arg1;
- (double)rightMarginConstant;
@property(retain, nonatomic) NSLayoutConstraint *rightMarginConstraint; // @synthesize rightMarginConstraint=_rightMarginConstraint;
@property(nonatomic) _Bool showsChevron; // @synthesize showsChevron=_showsChevron;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSLayoutConstraint *topMarginConstraint; // @synthesize topMarginConstraint=_topMarginConstraint;
- (id)titleHighlightedAttributes;
- (void)updateAccessoryView;
- (void)updateDate;
- (void)updateTextSizeRelatedConstraints;
- (void)updateTitle;

@end
