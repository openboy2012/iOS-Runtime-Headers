/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSPersistentStoreCoordinator, NSSQLCore, NSSet, NSString, PFUbiquityBaselineHeuristics, PFUbiquityLocation, PFUbiquityRecordsImporterSchedulingContext, PFUbiquitySwitchboardCacheWrapper, _PFUbiquityRecordsExporter, _PFUbiquityRecordsImporter;

@interface PFUbiquitySwitchboardEntryMetadata : NSObject {
    NSString *_activeModelVersionHash;
    PFUbiquityBaselineHeuristics *_baselineHeuristics;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
    _PFUbiquityRecordsExporter *_exporter;
    _PFUbiquityRecordsImporter *_importer;
    NSString *_localPeerID;
    PFUbiquityLocation *_localRootLocation;
    NSPersistentStoreCoordinator *_privatePSC;
    NSObject<OS_dispatch_queue> *_privateQueue;
    NSSQLCore *_privateStore;
    PFUbiquityRecordsImporterSchedulingContext *_schedulingContext;
    NSString *_storeName;
    NSMutableSet *_stores;
    PFUbiquityLocation *_ubiquityRootLocation;
    bool_useLocaAccount;
    bool_useLocalStorage;
}

@property(readonly) NSString * activeModelVersionHash;
@property(readonly) PFUbiquityBaselineHeuristics * baselineHeuristics;
@property(retain) PFUbiquitySwitchboardCacheWrapper * cacheWrapper;
@property(readonly) _PFUbiquityRecordsExporter * exporter;
@property(readonly) _PFUbiquityRecordsImporter * importer;
@property(readonly) NSPersistentStoreCoordinator * privatePSC;
@property(readonly) NSSQLCore * privateStore;
@property(readonly) PFUbiquityRecordsImporterSchedulingContext * schedulingContext;
@property(readonly) NSSet * stores;
@property(retain) PFUbiquityLocation * ubiquityRootLocation;
@property bool useLocalAccount;
@property bool useLocalStorage;

- (id)activeModelVersionHash;
- (void)addPersistentStore:(id)arg1;
- (id)baselineHeuristics;
- (id)cacheWrapper;
- (void)dealloc;
- (id)exporter;
- (id)importer;
- (id)initWithLocalPeerID:(id)arg1 ubiquityRootLocation:(id)arg2 localRootLocation:(id)arg3 storeName:(id)arg4 andPrivateQueue:(id)arg5;
- (id)privatePSC;
- (id)privateStore;
- (void)removePersistentStore:(id)arg1;
- (id)schedulingContext;
- (void)setCacheWrapper:(id)arg1;
- (void)setUbiquityRootLocation:(id)arg1;
- (void)setUseLocalAccount:(bool)arg1;
- (void)setUseLocalStorage:(bool)arg1;
- (id)stores;
- (void)tearDown;
- (id)ubiquityRootLocation;
- (bool)useLocalAccount;
- (bool)useLocalStorage;

@end
