/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIGradient;



@interface SUReflectionImageModifier : SUImageModifier 
{
    UIGradient *_gradient;
    float _reflectionHeight;
}

@property float reflectionHeight;
@property(retain) UIGradient *gradient;


- (void)setReflectionHeight:(float)arg1;
- (id)gradient;
- (void)setGradient:(id)arg1;
- (void)drawAfterImageForContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { float x1; float x2; })arg3;
- (struct CGSize { float x1; float x2; })finalSizeForSize:(struct CGSize { float x1; float x2; })arg1 originalSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageFrameForImage:(id)arg1 currentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { float x1; float x2; })arg3;
- (float)reflectionHeight;
- (void)dealloc;

@end