/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIColorScheme, UIImageView, UILabel;

@interface SKUITextBoxView : UIControl {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    SKUIColorScheme *_colorScheme;
    } _contentInsets;
    UILabel *_moreButtonLabel;
    long long _numberOfVisibleLines;
    double _rating;
    UIImageView *_ratingImageView;
    UILabel *_ratingLabel;
    UILabel *_subtitleLabel;
    struct __CTFrame { } *_textFrame;
    } _titleInsets;
    UILabel *_titleLabel;
    struct __CTFrame { } *_titleTextFrame;
    long long _truncationStyle;
    struct __CTLine { } *_truncationToken;
    NSString *_underlyingText;
}

@property(retain) SKUIColorScheme * colorScheme;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property(copy) NSString * moreButtonTitle;
@property long long numberOfVisibleLines;
@property double rating;
@property(copy) NSString * ratingText;
@property(copy) NSString * subtitle;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } titleInsets;
@property long long truncationStyle;

- (void).cxx_destruct;
- (id)_moreButtonLabel;
- (struct __CTFrame { }*)_textFrame;
- (struct CGSize { double x1; double x2; })_textSizeToFitSize:(struct CGSize { double x1; double x2; })arg1;
- (id)colorScheme;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)moreButtonTitle;
- (long long)numberOfVisibleLines;
- (double)rating;
- (id)ratingText;
- (void)reset;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFixedWidthTextFrame:(struct __CTFrame { }*)arg1;
- (void)setFixedWidthTitleTextFrame:(struct __CTFrame { }*)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMoreButtonTitle:(id)arg1;
- (void)setNumberOfVisibleLines:(long long)arg1;
- (void)setRating:(double)arg1;
- (void)setRatingText:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTextFrameWithText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTruncationStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })titleInsets;
- (long long)truncationStyle;

@end
