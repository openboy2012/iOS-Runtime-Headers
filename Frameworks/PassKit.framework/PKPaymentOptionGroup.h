/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSString;

@interface PKPaymentOptionGroup : NSObject {
    NSString *_groupType;
    long long _indexForSelectedItem;
    NSArray *_items;
    id _selectionChangedHandler;
}

@property(readonly) NSString * groupDisplayName;
@property(copy) NSString * groupType;
@property long long indexForSelectedItem;
@property(retain) NSArray * items;
@property(copy) id selectionChangedHandler;

- (void)dealloc;
- (id)groupDisplayName;
- (id)groupType;
- (long long)indexForSelectedItem;
- (id)init;
- (id)items;
- (void)prependGroupItem:(id)arg1 promoteAndCoalesceDupes:(bool)arg2;
- (void)prependGroupItems:(id)arg1 afterItem:(id)arg2;
- (id)selectionChangedHandler;
- (void)setGroupType:(id)arg1;
- (void)setIndexForSelectedItem:(long long)arg1;
- (void)setItems:(id)arg1;
- (void)setSelectionChangedHandler:(id)arg1;

@end
