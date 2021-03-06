/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<TSDCanvasZoomTrackerDelegate>, TSDCanvasLayer;

@interface TSDCanvasZoomTracker : NSObject {
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    boolmAlwaysUsesTranslationSprings;
    boolmAnimateTransform;
    boolmHasGestureOrigin;
    boolmIsShowingZoomHUD;
    boolmIsZooming;
    boolmSnapsViewScale;
    TSDCanvasLayer *mCanvasLayer;
    NSObject<TSDCanvasZoomTrackerDelegate> *mDelegate;
    } mGestureOffset;
    } mGestureOrigin;
    } mSavedContentOffset;
    } mSavedTransform;
    } mZoomOrigin;
    double mZoomStartTime;
    double mZoomVelocity;
    unsigned long long mZoomVelocitySampleCount;
}

@property bool alwaysUsesTranslationSprings;
@property bool animateTransform;
@property NSObject<TSDCanvasZoomTrackerDelegate> * delegate;
@property bool snapsViewScale;

- (bool)alwaysUsesTranslationSprings;
- (bool)animateTransform;
- (id)delegate;
- (id)initWithCanvasLayer:(id)arg1;
- (void)p_finishZoomWithFinalScaleFactor:(double)arg1 contentOffset:(struct CGPoint { double x1; double x2; })arg2;
- (void)setAlwaysUsesTranslationSprings:(bool)arg1;
- (void)setAnimateTransform:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSnapsViewScale:(bool)arg1;
- (bool)snapsViewScale;
- (void)zoomWithScale:(double)arg1 velocity:(double)arg2 locationInView:(struct CGPoint { double x1; double x2; })arg3 phase:(int)arg4;

@end
