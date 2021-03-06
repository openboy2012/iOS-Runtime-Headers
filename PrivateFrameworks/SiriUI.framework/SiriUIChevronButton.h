/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class SiriUIKeyline, UIImageView, UIView;

@interface SiriUIChevronButton : UIButton {
    UIImageView *_chevronImageView;
    double _chevronRightInset;
    SiriUIKeyline *_keyline;
    long long _keylineType;
    double _leftSubviewInset;
    UIView *_subview;
    bool_hasChevron;
}

@property double chevronRightInset;
@property bool hasChevron;
@property long long keylineType;
@property double leftSubviewInset;
@property(retain) UIView * subview;

- (void).cxx_destruct;
- (double)chevronRightInset;
- (bool)hasChevron;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)keylineType;
- (void)layoutSubviews;
- (double)leftSubviewInset;
- (void)setChevronRightInset:(double)arg1;
- (void)setHasChevron:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setKeylineType:(long long)arg1;
- (void)setLeftSubviewInset:(double)arg1;
- (void)setSubview:(id)arg1;
- (id)subview;

@end
