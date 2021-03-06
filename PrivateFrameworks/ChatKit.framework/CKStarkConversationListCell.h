/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSDate, NSString, UIDateLabel, UIImage, UIImageView, UILabel;

@interface CKStarkConversationListCell : UITableViewCell {
    UIDateLabel *_dateLabel;
    UIImage *_monogramImage;
    UILabel *_recipientsLabel;
    UIImageView *_unreadImageView;
}

@property(retain) NSDate * date;
@property(retain) UIDateLabel * dateLabel;
@property bool hasUnreadMessages;
@property UIImage * monogramImage;
@property(retain) NSString * recipientNames;
@property(retain) UILabel * recipientsLabel;
@property(retain) UIImageView * unreadImageView;

- (id)dateLabel;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)monogramImage;
- (id)recipientsLabel;
- (void)setDate:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setHasUnreadMessages:(bool)arg1;
- (void)setMonogramImage:(id)arg1;
- (void)setRecipientNames:(id)arg1;
- (void)setRecipientsLabel:(id)arg1;
- (void)setUnreadImageView:(id)arg1;
- (id)unreadImageView;

@end
