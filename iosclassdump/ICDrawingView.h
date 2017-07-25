//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICDrawingLightView.h"

#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink, CALayer, CATextLayer, ICDrawing, ICDrawingAttachmentController, ICOpenGLESView, ICRulerGestureRecognizer, ICRulerLayer, ICUndoSwipeGestureRecognizer, NSLayoutConstraint, NSString, NSTimer, UIActivityIndicatorView, UITouch, UIView;

@interface ICDrawingView : ICDrawingLightView <UIGestureRecognizerDelegate>
{
    _Bool _navigationBarHidden;
    NSLayoutConstraint *bottomConstraint;
    _Bool _fullscreen;
    UIView *_transitionBackgroundView;
    UIView *_transitionImageView;
    CADisplayLink *_displayLink;
    CDUnknownBlockType _drawTimerBlock;
    ICDrawingAttachmentController *_drawingController;
    _Bool _shouldPause;
    _Bool _isDrawing;
    _Bool _isInteractingWithRuler;
    _Bool _zooming;
    _Bool _allowLiveInteraction;
    _Bool _editable;
    _Bool _prefersStatusBarHidden;
    _Bool _isInlineResizing;
    _Bool _isExpandedInline;
    _Bool _rulerEnabledButNotReportedToAnalytics;
    _Bool _rulerWasShownViaGesture;
    _Bool _rulerIsRotating;
    _Bool _canRulerSnapToAngle;
    _Bool _isRulerDrawingMovingToEndOfRuler;
    _Bool _fullySetup;
    _Bool _claimedLiveDrawing;
    UITouch *_drawingTouch;
    ICOpenGLESView *_glView;
    UIActivityIndicatorView *_activityView;
    ICRulerGestureRecognizer *_rulerGestureRecognizer;
    NSTimer *_imageTransformTimer;
    double _initialDrawingBoundsYOrigin;
    ICRulerLayer *_rulerLayer;
    CALayer *_rulerAngleMarker;
    CALayer *_rulerAngleTick;
    CATextLayer *_rulerAngleText;
    CALayer *_rulerDistanceHUD;
    CATextLayer *_rulerDistanceText;
    double _currentTValueForSnappedDrawing;
    double _minTValueForSnappedDrawing;
    double _maxTValueForSnappedDrawing;
    double _originTValueForSnappedDrawing;
    double _rulerZoomStartCenterTValueOnScreen;
    double _rulerZoomStartScale;
    ICUndoSwipeGestureRecognizer *_undoGestureRecognizer;
    ICUndoSwipeGestureRecognizer *_redoGestureRecognizer;
    double _delayRendersUntilTimestamp;
    double _drawingStartTimestamp;
    struct CGPoint _startDrawingLocation;
    CDStruct_cfd08fee _rulerState;
    CDStruct_cfd08fee _previousRulerState;
    struct CGAffineTransform _rulerTransform;
    struct CGAffineTransform _rulerStartTransform;
    struct CGAffineTransform _rulerZoomStartTransform;
}

+ (void)initialize;
+ (void)setupDefaults;
- (void).cxx_destruct;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_drawingDisplay;
- (id)accessibilityElements;
@property(nonatomic) __weak UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
- (id)addOpacityAnimationOnLayer:(id)arg1 delegate:(id)arg2 toOpacity:(double)arg3;
- (id)addScaleAnimationOnLayer:(id)arg1 delegate:(id)arg2 fromScale:(double)arg3 toScale:(double)arg4;
@property(nonatomic) _Bool allowLiveInteraction; // @synthesize allowLiveInteraction=_allowLiveInteraction;
- (struct CGAffineTransform)angleSnapRulerTransform:(struct CGAffineTransform)arg1 aroundOrigin:(struct CGPoint)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (struct CGPoint)applyTransformToTouchLocation:(struct CGPoint)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canChangeOrientationOnRotation;
- (_Bool)canEraseAll;
- (_Bool)canPerformUserAction;
- (_Bool)canRedo;
@property(nonatomic) _Bool canRulerSnapToAngle; // @synthesize canRulerSnapToAngle=_canRulerSnapToAngle;
- (_Bool)canUndo;
- (struct CGAffineTransform)canvasTransform;
@property(nonatomic) _Bool claimedLiveDrawing; // @synthesize claimedLiveDrawing=_claimedLiveDrawing;
- (_Bool)compactRuler;
@property(nonatomic) _Bool contentHidden;
@property(nonatomic) double currentTValueForSnappedDrawing; // @synthesize currentTValueForSnappedDrawing=_currentTValueForSnappedDrawing;
- (void)dealloc;
- (struct CGAffineTransform)defaultRulerTransfrom;
@property double delayRendersUntilTimestamp; // @synthesize delayRendersUntilTimestamp=_delayRendersUntilTimestamp;
- (void)didTransitionToSize:(struct CGSize)arg1;
- (void)done:(CDUnknownBlockType)arg1;
- (void)drawNowIfNeeded;
@property(readonly, nonatomic) ICDrawing *drawing;
- (void)drawingBeganAtPoint:(struct CGPoint)arg1 forTouch:(id)arg2 inputType:(long long)arg3;
@property(readonly, nonatomic) struct CGRect drawingBounds;
- (void)drawingBoundsUpdated;
- (void)drawingCancelled:(CDUnknownBlockType)arg1;
- (void)drawingEnded;
@property(readonly, nonatomic) struct CGSize drawingFullSize;
- (struct CGSize)drawingFullSizeForOrientation:(long long)arg1;
- (CDStruct_d0a6eba3)drawingInputPoint:(struct CGPoint)arg1 forTouch:(id)arg2 predicted:(_Bool)arg3;
@property(readonly, nonatomic) struct CGAffineTransform drawingOrientationTransform;
@property double drawingStartTimestamp; // @synthesize drawingStartTimestamp=_drawingStartTimestamp;
@property(retain, nonatomic) UITouch *drawingTouch; // @synthesize drawingTouch=_drawingTouch;
- (_Bool)enableUserActionButton;
- (void)endReplays;
- (struct CGAffineTransform)ensureRulerFullyOnscreen:(struct CGAffineTransform)arg1;
- (void)erase;
- (void)forceCancelDrawing;
- (void)forceEndDrawing;
@property(nonatomic) _Bool fullySetup; // @synthesize fullySetup=_fullySetup;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (struct CGPoint)getRulerCenterLineOriginAndTangent:(struct CGPoint *)arg1;
- (double)getRulerCenterTValueOnScreenForTransfrom:(struct CGAffineTransform)arg1;
@property(readonly, nonatomic) ICOpenGLESView *glView; // @synthesize glView=_glView;
- (void)hideRuler;
- (void)hideRulerAnimated:(_Bool)arg1;
- (void)hideUI;
@property(readonly, nonatomic) _Bool icaxIsFullscreen;
@property(readonly, nonatomic) id icaxOpenGLView;
- (struct CGRect)imageFrame;
@property(nonatomic) struct CGAffineTransform imageTransform;
@property(retain, nonatomic) NSTimer *imageTransformTimer; // @synthesize imageTransformTimer=_imageTransformTimer;
- (void)incrementRulerAngleBy:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 fullscreen:(_Bool)arg2 editable:(_Bool)arg3;
@property(nonatomic) double initialDrawingBoundsYOrigin; // @synthesize initialDrawingBoundsYOrigin=_initialDrawingBoundsYOrigin;
@property(nonatomic) _Bool isDrawing; // @synthesize isDrawing=_isDrawing;
@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) _Bool isExpandedInline; // @synthesize isExpandedInline=_isExpandedInline;
- (_Bool)isInReplay;
@property(nonatomic) _Bool isInlineResizing; // @synthesize isInlineResizing=_isInlineResizing;
@property(nonatomic) _Bool isInteractingWithRuler; // @synthesize isInteractingWithRuler=_isInteractingWithRuler;
@property(nonatomic) _Bool isRulerDrawingMovingToEndOfRuler; // @synthesize isRulerDrawingMovingToEndOfRuler=_isRulerDrawingMovingToEndOfRuler;
- (void)makeRulerHorizontal;
- (void)makeRulerVertical;
@property(nonatomic) double maxTValueForSnappedDrawing; // @synthesize maxTValueForSnappedDrawing=_maxTValueForSnappedDrawing;
@property(nonatomic) double minTValueForSnappedDrawing; // @synthesize minTValueForSnappedDrawing=_minTValueForSnappedDrawing;
- (id)newNavigationController;
@property(nonatomic) double originTValueForSnappedDrawing; // @synthesize originTValueForSnappedDrawing=_originTValueForSnappedDrawing;
- (struct CGAffineTransform)pixelSnapRulerTransform:(struct CGAffineTransform)arg1;
@property(readonly, nonatomic) _Bool prefersStatusBarHidden; // @synthesize prefersStatusBarHidden=_prefersStatusBarHidden;
@property(nonatomic) CDStruct_cfd08fee previousRulerState; // @synthesize previousRulerState=_previousRulerState;
- (void)redo;
@property(retain, nonatomic) ICUndoSwipeGestureRecognizer *redoGestureRecognizer; // @synthesize redoGestureRecognizer=_redoGestureRecognizer;
- (void)removeRulerMarkers;
- (void)reportDrawingToolUsage;
- (void)resetRuler;
- (void)resetRulerTouches;
- (void)resetRulerTransform;
- (void)rotate;
- (void)rotateIfNeeded;
- (double)rulerAlignInset;
@property(retain, nonatomic) CALayer *rulerAngleMarker; // @synthesize rulerAngleMarker=_rulerAngleMarker;
@property(retain, nonatomic) CATextLayer *rulerAngleText; // @synthesize rulerAngleText=_rulerAngleText;
@property(retain, nonatomic) CALayer *rulerAngleTick; // @synthesize rulerAngleTick=_rulerAngleTick;
- (id)rulerBackgroundImage;
- (id)rulerDialImage;
- (id)rulerDialLevelImage;
@property(retain, nonatomic) CALayer *rulerDistanceHUD; // @synthesize rulerDistanceHUD=_rulerDistanceHUD;
@property(retain, nonatomic) CATextLayer *rulerDistanceText; // @synthesize rulerDistanceText=_rulerDistanceText;
@property _Bool rulerEnabledButNotReportedToAnalytics; // @synthesize rulerEnabledButNotReportedToAnalytics=_rulerEnabledButNotReportedToAnalytics;
@property(retain, nonatomic) ICRulerGestureRecognizer *rulerGestureRecognizer; // @synthesize rulerGestureRecognizer=_rulerGestureRecognizer;
@property(nonatomic) _Bool rulerIsRotating; // @synthesize rulerIsRotating=_rulerIsRotating;
@property(retain, nonatomic) ICRulerLayer *rulerLayer; // @synthesize rulerLayer=_rulerLayer;
- (void)rulerMoveGesture:(id)arg1;
@property(nonatomic) struct CGAffineTransform rulerStartTransform; // @synthesize rulerStartTransform=_rulerStartTransform;
@property(nonatomic) CDStruct_cfd08fee rulerState; // @synthesize rulerState=_rulerState;
- (double)rulerTickMarkInset;
@property(nonatomic) struct CGAffineTransform rulerTransform; // @synthesize rulerTransform=_rulerTransform;
@property(nonatomic) _Bool rulerWasShownViaGesture; // @synthesize rulerWasShownViaGesture=_rulerWasShownViaGesture;
- (double)rulerWidth;
@property(nonatomic) double rulerZoomStartCenterTValueOnScreen; // @synthesize rulerZoomStartCenterTValueOnScreen=_rulerZoomStartCenterTValueOnScreen;
@property(nonatomic) double rulerZoomStartScale; // @synthesize rulerZoomStartScale=_rulerZoomStartScale;
@property(nonatomic) struct CGAffineTransform rulerZoomStartTransform; // @synthesize rulerZoomStartTransform=_rulerZoomStartTransform;
- (_Bool)scrollViewShouldCancelTouchesForThisView;
- (void)setAttachment:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setImageTransform:(struct CGAffineTransform)arg1 animated:(_Bool)arg2;
- (void)setImageTransform:(struct CGAffineTransform)arg1 fromViewOrientation:(struct CGAffineTransform)arg2 toViewOrientation:(struct CGAffineTransform)arg3 animated:(_Bool)arg4 duration:(double)arg5;
- (void)setNeedsDrawingDisplay;
- (void)setOrientationIfPossibleFromSize:(struct CGSize)arg1;
@property(nonatomic) struct CGPoint startDrawingLocation; // @synthesize startDrawingLocation=_startDrawingLocation;
@property(retain, nonatomic) ICUndoSwipeGestureRecognizer *undoGestureRecognizer; // @synthesize undoGestureRecognizer=_undoGestureRecognizer;
@property(nonatomic) _Bool zooming; // @synthesize zooming=_zooming;
- (void)setupDisplayLink;
- (void)setupFullScreenTransform;
- (void)setupFullScreenTransform:(struct CGAffineTransform)arg1 toViewOrientation:(struct CGAffineTransform)arg2 animated:(_Bool)arg3;
- (void)setupOpenGL;
- (void)setupTransitionFrameForViewSize:(struct CGSize)arg1;
- (void)setupUI;
- (_Bool)shouldUseLargestRulerTextFontSize;
- (_Bool)showEraseAllButton;
- (void)showRuler;
- (_Bool)supportsFreeTransformGesture;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)transitionToSize:(struct CGSize)arg1;
- (void)undo;
- (id)undoManager;
@property(readonly, nonatomic) struct CGSize unrotatedDrawingFullSize;
- (void)updateAngle:(id)arg1;
- (void)updateAngleWithAngleMarkerPosition:(struct CGPoint)arg1;
- (void)updateDistanceMarkerWithSpacing:(double)arg1;
- (void)updateImageTransform:(id)arg1;
- (void)updateRuler:(id)arg1;
- (void)updateRulerMarkerForLocation:(struct CGPoint)arg1 firstTouch:(_Bool)arg2;
- (void)updateTickMarkImage;
- (struct CGAffineTransform)viewOrientationTransform;
- (_Bool)viewPointInRuler:(struct CGPoint)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
