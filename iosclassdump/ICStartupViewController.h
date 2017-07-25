//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICStartupBaseViewController.h"

#import "ICStartupDeviceCheckIndicator.h"

@class NSArray, NSLayoutConstraint, NSTimer, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface ICStartupViewController : ICStartupBaseViewController <ICStartupDeviceCheckIndicator>
{
    _Bool _shouldShowStartupMovingView;
    _Bool _horizontalImageLayout;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_subTitleLabel;
    NSLayoutConstraint *_titleWidthConstraint;
    NSLayoutConstraint *_titleAndSubTitleVerticalConstraint;
    NSLayoutConstraint *_titleToImagesVerticalConstraint;
    NSLayoutConstraint *_leftMarginConstraint;
    NSLayoutConstraint *_rightMarginConstraint;
    UIImageView *_imageView1;
    UIImageView *_imageView2;
    UIImageView *_imageView3;
    UIView *_imageTextView1;
    UIView *_imageTextView2;
    UIView *_imageTextView3;
    UILabel *_imageText1Label;
    UILabel *_imageText1SubLabel;
    UILabel *_imageText2Label;
    UILabel *_imageText2SubLabel;
    UILabel *_imageText3Label;
    UILabel *_imageText3SubLabel;
    NSLayoutConstraint *_imageTextWidthConstraint;
    NSLayoutConstraint *_imageSizeConstraint;
    NSLayoutConstraint *_imagesToTextHorizontalConstraint;
    NSArray *_imagesLayoutConstraints;
    NSTimer *_timeoutTimer;
    NSArray *_choiceLabels;
    NSArray *_choiceBlocks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
- (void)applyAccessibilityInfo;
@property(copy, nonatomic) NSArray *choiceBlocks; // @synthesize choiceBlocks=_choiceBlocks;
@property(copy, nonatomic) NSArray *choiceLabels; // @synthesize choiceLabels=_choiceLabels;
- (void)choiceSelected:(unsigned long long)arg1;
- (void)continueAction:(id)arg1;
- (_Bool)didFailToDownloadDeviceList;
- (void)didReceiveMemoryWarning;
- (void)ensureControlsAreConnected;
@property(nonatomic) _Bool horizontalImageLayout; // @synthesize horizontalImageLayout=_horizontalImageLayout;
@property(retain, nonatomic) NSLayoutConstraint *imageSizeConstraint; // @synthesize imageSizeConstraint=_imageSizeConstraint;
@property(retain, nonatomic) UILabel *imageText1Label; // @synthesize imageText1Label=_imageText1Label;
@property(retain, nonatomic) UILabel *imageText1SubLabel; // @synthesize imageText1SubLabel=_imageText1SubLabel;
@property(retain, nonatomic) UILabel *imageText2Label; // @synthesize imageText2Label=_imageText2Label;
@property(retain, nonatomic) UILabel *imageText2SubLabel; // @synthesize imageText2SubLabel=_imageText2SubLabel;
@property(retain, nonatomic) UILabel *imageText3Label; // @synthesize imageText3Label=_imageText3Label;
@property(retain, nonatomic) UILabel *imageText3SubLabel; // @synthesize imageText3SubLabel=_imageText3SubLabel;
@property(retain, nonatomic) UIView *imageTextView1; // @synthesize imageTextView1=_imageTextView1;
@property(retain, nonatomic) UIView *imageTextView2; // @synthesize imageTextView2=_imageTextView2;
@property(retain, nonatomic) UIView *imageTextView3; // @synthesize imageTextView3=_imageTextView3;
@property(retain, nonatomic) NSLayoutConstraint *imageTextWidthConstraint; // @synthesize imageTextWidthConstraint=_imageTextWidthConstraint;
@property(retain, nonatomic) UIImageView *imageView1; // @synthesize imageView1=_imageView1;
@property(retain, nonatomic) UIImageView *imageView2; // @synthesize imageView2=_imageView2;
@property(retain, nonatomic) UIImageView *imageView3; // @synthesize imageView3=_imageView3;
@property(copy, nonatomic) NSArray *imagesLayoutConstraints; // @synthesize imagesLayoutConstraints=_imagesLayoutConstraints;
@property(retain, nonatomic) NSLayoutConstraint *imagesToTextHorizontalConstraint; // @synthesize imagesToTextHorizontalConstraint=_imagesToTextHorizontalConstraint;
- (_Bool)isExtraSmallDevice;
@property(retain, nonatomic) NSLayoutConstraint *leftMarginConstraint; // @synthesize leftMarginConstraint=_leftMarginConstraint;
- (id)noDeviceListDisclaimerString;
- (_Bool)prefersChoicesSideBySide;
- (void)recreateImagesConstraintsVertically:(_Bool)arg1 compact:(_Bool)arg2 viewSize:(struct CGSize)arg3;
@property(retain, nonatomic) NSLayoutConstraint *rightMarginConstraint; // @synthesize rightMarginConstraint=_rightMarginConstraint;
@property(nonatomic) _Bool shouldShowStartupMovingView; // @synthesize shouldShowStartupMovingView=_shouldShowStartupMovingView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSLayoutConstraint *titleAndSubTitleVerticalConstraint; // @synthesize titleAndSubTitleVerticalConstraint=_titleAndSubTitleVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleToImagesVerticalConstraint; // @synthesize titleToImagesVerticalConstraint=_titleToImagesVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleWidthConstraint; // @synthesize titleWidthConstraint=_titleWidthConstraint;
- (void)setUpDisclaimerLabel;
- (void)setupChoiceViewsWithDeviceListFetchTimeout:(double)arg1;
- (void)setupLineSpacing;
- (void)setupUIForIPadWithViewSize:(struct CGSize)arg1;
- (void)setupUIForIPhoneOrCompactWidth;
- (void)setupUIForViewSize:(struct CGSize)arg1;
- (void)startIndicatorAnimation;
- (void)stopIndicatorAnimation;
- (void)updateUIForSketchingNotEnabled;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

