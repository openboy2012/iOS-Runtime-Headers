/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class ACAccount, NSArray, NSDictionary, NSSet, NSString;

@interface AAAccount : NSObject {
    ACAccount *_account;
    NSArray *_appleIDAliases;
    NSString *_fmipToken;
    NSString *_protocolVersion;
}

@property(copy) NSString * accountDescription;
@property(readonly) NSDictionary * accountFirstDisplayAlert;
@property(readonly) NSDictionary * accountFooterButton;
@property(readonly) NSString * accountFooterText;
@property(readonly) int accountServiceType;
@property(readonly) NSArray * appleIDAliases;
@property(copy) NSString * authToken;
@property(readonly) NSDictionary * dataclassProperties;
@property(readonly) NSString * displayName;
@property(readonly) NSSet * enabledDataclasses;
@property(readonly) NSString * firstName;
@property(copy) NSString * fmipToken;
@property(readonly) NSString * identifier;
@property(readonly) NSString * lastName;
@property(readonly) bool needsEmailConfiguration;
@property(readonly) bool needsRegistration;
@property bool needsToVerifyTerms;
@property(copy) NSString * password;
@property(readonly) NSString * personID;
@property bool primaryAccount;
@property(readonly) NSString * primaryEmail;
@property(readonly) bool primaryEmailVerified;
@property(readonly) NSString * protocolVersion;
@property(readonly) NSSet * provisionedDataclasses;
@property(readonly) bool serviceUnavailable;
@property(readonly) NSDictionary * serviceUnavailableInfo;
@property(readonly) NSArray * supportedDataclasses;
@property(readonly) NSString * syncStoreIdentifier;
@property(copy) NSString * username;

+ (id)accountTypeString;
+ (id)dataclassesBoundToPrimaryAccount;
+ (id)dataclassesBoundToSingleAccount;
+ (id)dataclassesBoundToSyncAccount;

- (void).cxx_destruct;
- (id)_childAccounts;
- (id)_mailChildAccount;
- (id)account;
- (id)accountDescription;
- (id)accountFirstDisplayAlert;
- (id)accountFooterButton;
- (id)accountFooterText;
- (id)accountPropertyForKey:(id)arg1;
- (int)accountServiceType;
- (id)appleIDAliases;
- (id)authToken;
- (void)authenticateWithHandler:(id)arg1;
- (id)dataclassProperties;
- (id)displayName;
- (id)enabledDataclasses;
- (id)firstName;
- (void)flushCachedPassword;
- (void)flushCachedTokens;
- (id)fmipToken;
- (id)identifier;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1;
- (bool)isEnabledForDataclass:(id)arg1;
- (bool)isProvisionedForDataclass:(id)arg1;
- (id)lastName;
- (void)lookupEmailAddresses:(id)arg1 withHandler:(id)arg2;
- (int)mobileMeAccountStatus;
- (bool)needsEmailConfiguration;
- (bool)needsRegistration;
- (bool)needsToVerifyTerms;
- (void)notifyUserOfQuotaDepletion;
- (id)password;
- (id)personID;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1 withHandler:(id)arg2;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1;
- (bool)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 withHandler:(id)arg2;
- (bool)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1;
- (bool)primaryAccount;
- (id)primaryEmail;
- (bool)primaryEmailVerified;
- (id)propertiesForDataclass:(id)arg1;
- (id)protocolVersion;
- (id)provisionedDataclasses;
- (void)removePasswordFromKeychain;
- (void)removeTokensFromKeychain;
- (void)renewCredentialsForAppleIDWithHandler:(id)arg1;
- (void)saveFMIPTokenInKeychain;
- (void)savePasswordInKeychain;
- (void)saveTokensInKeychain;
- (bool)serviceUnavailable;
- (id)serviceUnavailableInfo;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setAuthToken:(id)arg1;
- (void)setEnabled:(bool)arg1 forDataclass:(id)arg2;
- (void)setFmipToken:(id)arg1;
- (void)setNeedsToVerifyTerms:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setPrimaryAccount:(bool)arg1;
- (void)setUseCellular:(bool)arg1 forDataclass:(id)arg2;
- (void)setUsername:(id)arg1;
- (void)setupChildMailAccountAndEnable:(bool)arg1 withEmail:(id)arg2;
- (void)signInWithHandler:(id)arg1;
- (id)supportedDataclasses;
- (id)syncStoreIdentifier;
- (void)updateAccountPropertiesWithHandler:(id)arg1;
- (void)updateAccountWithProvisioningResponse:(id)arg1;
- (bool)useCellularForDataclass:(id)arg1;
- (id)username;

@end
