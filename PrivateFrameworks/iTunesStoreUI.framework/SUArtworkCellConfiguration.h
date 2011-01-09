/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableDictionary, NSMutableArray;



@interface SUArtworkCellConfiguration : SUArrayCellConfiguration <ISStoreURLOperationDelegate>
{
    NSMutableDictionary *_artworkByURL;
    NSMutableArray *_artworkLoadOperations;
}

+ (id)copyDefaultContext;

- (void)reloadAfterArtworkLoad;
- (id)artworkImageForItemImage:(id)arg1;
- (id)artworkImageForURL:(id)arg1;
- (void)cancelArtworkRequests;
- (id)copyImageDataProvider;
- (id)_artworkImageForURL:(id)arg1 dataProvider:(id)arg2;
- (void)setRepresentedObject:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)dealloc;

@end