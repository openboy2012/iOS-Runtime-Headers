/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSExtension, NSExtensionItem, NSString, UIImage, UIViewController, _UIActivityBundleHelper;

@interface UIApplicationExtensionActivity : UIActivity {
    NSExtensionItem *__injectedExtensionItem;
    _UIActivityBundleHelper *_activityBundleHelper;
    NSExtension *_applicationExtension;
    id _extensionContextIdentifier;
    id _extensionRequestCleanupCompletion;
    UIViewController *_extensionViewController;
    NSString *_localizedExtensionBundleName;
    id _presenterCompletion;
    UIViewController *_presenterViewController;
    UIImage *_renderedActivityImage;
    UIImage *_renderedActivitySettingsImage;
}

@property(retain) NSExtensionItem * _injectedExtensionItem;
@property(retain) _UIActivityBundleHelper * activityBundleHelper;
@property(retain) NSExtension * applicationExtension;
@property(copy) id extensionContextIdentifier;
@property(copy) id extensionRequestCleanupCompletion;
@property(retain) UIViewController * extensionViewController;
@property(copy) NSString * localizedExtensionBundleName;
@property(copy) id presenterCompletion;
@property UIViewController * presenterViewController;
@property(retain) UIImage * renderedActivityImage;
@property(retain) UIImage * renderedActivitySettingsImage;

+ (id)_applicationExtensionActivitiesForItems:(id)arg1 sourceIsManaged:(bool)arg2;
+ (id)_applicationExtensionActivitiesForItems:(id)arg1;
+ (long long)activityCategory;

- (id)_activityImage;
- (id)_activitySettingsImage;
- (bool)_canBeExcludedByActivityViewController:(id)arg1;
- (void)_cleanup;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (id)_injectedExtensionItem;
- (void)_injectedJavaScriptResult:(id)arg1;
- (void)_instantiateExtensionViewControllerWithInputItems:(id)arg1;
- (bool)_isServiceExtension;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id)arg3;
- (void)_presentExtensionViewControllerIfPossible;
- (id)activityBundleHelper;
- (id)activityTitle;
- (id)activityType;
- (id)applicationExtension;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)extensionContextIdentifier;
- (id)extensionRequestCleanupCompletion;
- (id)extensionViewController;
- (id)initWithApplicationExtension:(id)arg1;
- (id)localizedExtensionBundleName;
- (void)prepareWithActivityItems:(id)arg1;
- (id)presenterCompletion;
- (id)presenterViewController;
- (id)renderedActivityImage;
- (id)renderedActivitySettingsImage;
- (void)setActivityBundleHelper:(id)arg1;
- (void)setApplicationExtension:(id)arg1;
- (void)setExtensionContextIdentifier:(id)arg1;
- (void)setExtensionRequestCleanupCompletion:(id)arg1;
- (void)setExtensionViewController:(id)arg1;
- (void)setLocalizedExtensionBundleName:(id)arg1;
- (void)setPresenterCompletion:(id)arg1;
- (void)setPresenterViewController:(id)arg1;
- (void)setRenderedActivityImage:(id)arg1;
- (void)setRenderedActivitySettingsImage:(id)arg1;
- (void)set_injectedExtensionItem:(id)arg1;

@end
