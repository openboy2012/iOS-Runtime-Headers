/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSMutableSet;

@interface UIViewKeyframeAnimationState : UIViewAnimationState {
    long long _calculationMode;
    double _frameDuration;
    double _frameStartTime;
    NSMutableSet *_keyframeLayers;
    NSMutableDictionary *_keyframeLayersForCurrentKeyFrameDict;
    bool_inFrame;
}

- (void)addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 animations:(id)arg3;
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)cleanupTrackedLayers;
- (void)dealloc;
- (id)init;
- (void)pop;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(id)arg7 completion:(id)arg8;

@end
