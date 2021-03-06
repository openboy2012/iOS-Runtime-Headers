/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class <MPUNowPlayingTransportControlsDelegate>, MPQueueFeeder;

@interface MPUNowPlayingTransportControls : MPTransportControls {
    <MPUNowPlayingTransportControlsDelegate> *_delegate;
    MPQueueFeeder *_feeder;
}

@property(readonly) double _innerControlMargin;
@property(readonly) double _nextButtonVInset;
@property(readonly) double _outterControlMargin;
@property(readonly) double _playPauseBottomVInset;
@property <MPUNowPlayingTransportControlsDelegate> * delegate;

+ (Class)buttonClass;
+ (bool)buttonImagesUseBackgroundImage;
+ (long long)buttonType;
+ (unsigned long long)defaultVisibleParts;

- (void).cxx_destruct;
- (double)_innerControlMargin;
- (double)_nextButtonVInset;
- (double)_outterControlMargin;
- (double)_playPauseBottomVInset;
- (void)_skipLimitDidChangeNotification:(id)arg1;
- (void)_updateItemRelatedParts;
- (id)buttonImageForPart:(unsigned long long)arg1;
- (void)dealloc;
- (id)delegate;
- (void)layoutSubviews;
- (id)newButtonForPart:(unsigned long long)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(bool)arg3;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (id)tintColorForPart:(unsigned long long)arg1;
- (bool)usesTintColorForControls;

@end
