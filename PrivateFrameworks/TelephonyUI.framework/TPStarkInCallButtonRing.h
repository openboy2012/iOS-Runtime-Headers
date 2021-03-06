/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class UIColor;

@interface TPStarkInCallButtonRing : UIView {
    UIColor *_fillColor;
    bool_highlighted;
    bool_selected;
    bool_toggledOn;
}

@property(retain) UIColor * fillColor;
@property bool highlighted;
@property bool selected;
@property bool toggledOn;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)fillColor;
- (bool)highlighted;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)selected;
- (void)setFillColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setToggledOn:(bool)arg1;
- (bool)toggledOn;

@end
