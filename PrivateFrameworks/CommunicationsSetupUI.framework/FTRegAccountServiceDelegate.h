/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CNFRegController, NSDictionary, NSString;

@interface FTRegAccountServiceDelegate : NSObject <AASetupAssistantDelegateService, AAAppleIDLoginPlugin> {
    id _completionHandler;
    CNFRegController *_regController;
    NSDictionary *_responseDictionary;
}

@property(copy) id completionHandler;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) CNFRegController * regController;
@property(copy) NSDictionary * responseDictionary;
@property(readonly) Class superclass;

- (bool)_account:(id)arg1 matchesSetupParameters:(id)arg2;
- (void)_cleanup;
- (id)_defaultSetupRequestParameters;
- (id)_existingAccountForSetupParameters:(id)arg1;
- (id)_existingOperationalAccount;
- (void)_handleFailureWithErrorCode:(long long)arg1;
- (void)_handleSuccess:(bool)arg1 error:(id)arg2;
- (bool)_hasAccount;
- (bool)_hasOperationalAccount;
- (id)_logName;
- (bool)_shouldSkipAccountSetup:(id)arg1;
- (id)accountSetupRequestParameters;
- (void)completeSetupWithResponseParameters:(id)arg1 handler:(id)arg2;
- (id)completionHandler;
- (void)dealloc;
- (id)delegateServiceIdentifier;
- (id)displayName;
- (void)handleLoginResponse:(id)arg1 completion:(id)arg2;
- (id)init;
- (id)initWithRegController:(id)arg1;
- (id)name;
- (id)parametersForIdentityEstablishmentRequest;
- (id)parametersForLoginRequest;
- (id)regController;
- (id)responseDictionary;
- (id)serviceIdentifier;
- (bool)serviceIsAvailable;
- (long long)serviceType;
- (void)setCompletionHandler:(id)arg1;
- (void)setRegController:(id)arg1;
- (void)setResponseDictionary:(id)arg1;
- (void)setupOperationFailed;

@end
