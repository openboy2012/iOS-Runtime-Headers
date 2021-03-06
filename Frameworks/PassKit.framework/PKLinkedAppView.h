/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSArray, NSDictionary, NSString, NSURL, PKLinkedAppUserRatingView, SKStoreProductViewController, SSSoftwareLibraryItem, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface PKLinkedAppView : UITableViewCell <SKStoreProductViewControllerDelegate> {
    UIActivityIndicatorView *_activityIndicator;
    NSURL *_appLaunchURL;
    UILabel *_appName;
    UILabel *_appPublisher;
    SSSoftwareLibraryItem *_foundLibraryItem;
    NSDictionary *_foundStoreItem;
    UIImageView *_iconView;
    UILabel *_loadingLabel;
    UILabel *_price;
    SKStoreProductViewController *_productViewController;
    NSArray *_storeIDs;
    UILabel *_tapToOpen;
    PKLinkedAppUserRatingView *_userRatingView;
    UIButton *_viewButton;
    bool_appInstalled;
    bool_appNotAvailable;
    bool_lookupInitiated;
}

@property(retain) UIActivityIndicatorView * activityIndicator;
@property bool appInstalled;
@property(retain) NSURL * appLaunchURL;
@property(retain) UILabel * appName;
@property bool appNotAvailable;
@property(retain) UILabel * appPublisher;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) SSSoftwareLibraryItem * foundLibraryItem;
@property(retain) NSDictionary * foundStoreItem;
@property(readonly) unsigned long long hash;
@property(retain) UIImageView * iconView;
@property(retain) UILabel * loadingLabel;
@property bool lookupInitiated;
@property(retain) UILabel * price;
@property(retain) SKStoreProductViewController * productViewController;
@property(retain) NSArray * storeIDs;
@property(readonly) Class superclass;
@property(retain) UILabel * tapToOpen;
@property(retain) PKLinkedAppUserRatingView * userRatingView;
@property(retain) UIButton * viewButton;

- (bool)_anyAppIsInstalled:(id)arg1;
- (int)_bindingTypeForNewsstandItem:(id)arg1;
- (void)_buttonPressed:(id)arg1;
- (void)_cleanupViews;
- (struct CGSize { double x1; double x2; })_desiredSizeForNewsstandItem:(id)arg1;
- (int)_iconOptionsForItem:(id)arg1;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize { double x1; double x2; })arg2 requireStrictMatch:(bool)arg3;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize { double x1; double x2; })arg2;
- (int)_iconVariantForImage:(id)arg1 item:(id)arg2;
- (id)_imageForSize:(struct CGSize { double x1; double x2; })arg1 fromArtwork:(id)arg2 requireStrictMatch:(bool)arg3;
- (bool)_itemArtNeedsShine:(id)arg1;
- (bool)_itemIsNewsstandApp:(id)arg1;
- (void)_layoutLoadingView;
- (void)_layoutLockupView;
- (void)_layoutNotAvailableView;
- (id)_newsstandArtworkForItem:(id)arg1;
- (id)_priceForItem:(id)arg1;
- (struct CGSize { double x1; double x2; })_sizeFromImage:(id)arg1;
- (id)activityIndicator;
- (bool)appInstalled;
- (id)appLaunchURL;
- (id)appName;
- (bool)appNotAvailable;
- (id)appPublisher;
- (void)dealloc;
- (id)foundLibraryItem;
- (id)foundStoreItem;
- (id)iconView;
- (id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)loadingLabel;
- (bool)lookupInitiated;
- (void)performStoreLookup;
- (id)price;
- (id)productViewController;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)reload;
- (void)reloadWithDelay:(double)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setAppInstalled:(bool)arg1;
- (void)setAppLaunchURL:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAppNotAvailable:(bool)arg1;
- (void)setAppPublisher:(id)arg1;
- (void)setFoundLibraryItem:(id)arg1;
- (void)setFoundStoreItem:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setLoadingLabel:(id)arg1;
- (void)setLookupInitiated:(bool)arg1;
- (void)setPrice:(id)arg1;
- (void)setProductViewController:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setTapToOpen:(id)arg1;
- (void)setUserRatingView:(id)arg1;
- (void)setViewButton:(id)arg1;
- (id)storeIDs;
- (id)tapToOpen;
- (id)userRatingView;
- (id)viewButton;

@end
