/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSHashTable, NSObject<OS_dispatch_queue>;

@interface LSApplicationWorkspaceRemoteObserver : LSApplicationWorkspaceObserver {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_progressSubscriptionsQueue;
    bool_observinglsd;
}

- (void)addLocalObserver:(id)arg1;
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;
- (void)applicationInstallsDidCancel:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)applicationInstallsDidPause:(id)arg1;
- (void)applicationInstallsDidPrioritize:(id)arg1;
- (void)applicationInstallsDidResume:(id)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)applicationInstallsDidUpdateIcon:(id)arg1;
- (void)applicationsDidFailToInstall:(id)arg1;
- (void)applicationsDidFailToUninstall:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)applicationsWillInstall:(id)arg1;
- (void)applicationsWillUninstall:(id)arg1;
- (unsigned long long)currentObserverCount;
- (void)dealloc;
- (id)init;
- (bool)isObservinglsd;
- (id)localObservers;
- (void)networkUsageChanged:(bool)arg1;
- (void)pluginsDidInstall:(id)arg1;
- (void)pluginsDidUninstall:(id)arg1;
- (void)pluginsWillUninstall:(id)arg1;
- (void)removeLocalObserver:(id)arg1;
- (void)setObservinglsd:(bool)arg1;

@end
