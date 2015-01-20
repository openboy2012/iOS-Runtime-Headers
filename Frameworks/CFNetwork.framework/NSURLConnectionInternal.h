/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@class NSDictionary, NSOperationQueue, NSString, NSURL, NSURLConnection, NSURLRequest;

@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender> {
    NSURLConnection *_connection;
    NSDictionary *_connectionProperties;
    NSURLRequest *_currentRequest;
    id _delegate;
    NSOperationQueue *_delegateQueue;
    NSURLRequest *_originalRequest;
    NSURL *_url;
    bool_connectionActive;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (id)_connectionProperties;
- (void)_invalidate;
- (void)_setDelegateQueue:(id)arg1;
- (id)_timingData;
- (void)_withActiveConnectionAndDelegate:(id)arg1;
- (void)_withConnectionAndDelegate:(id)arg1 onlyActive:(bool)arg2;
- (void)_withConnectionAndDelegate:(id)arg1;
- (void)_withConnectionDisconnectFromConnection;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (id)currentRequest;
- (void)dealloc;
- (id)initWithInfo:(const struct InternalInit { id x1; id x2; id x3; id x4; boolx5; long long x6; }*)arg1;
- (void)invokeForDelegate:(id)arg1;
- (bool)isConnectionActive;
- (id)originalRequest;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)setConnectionActive:(bool)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

@end