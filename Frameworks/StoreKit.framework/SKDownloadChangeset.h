/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class NSError, NSNumber, NSURL;

@interface SKDownloadChangeset : NSObject <NSCopying> {
    NSNumber *_contentLength;
    NSURL *_contentURL;
    NSNumber *_downloadID;
    NSNumber *_downloadState;
    NSError *_error;
    NSNumber *_progress;
    NSNumber *_timeRemaining;
}

@property(copy) NSNumber * contentLength;
@property(copy) NSURL * contentURL;
@property(copy) NSNumber * downloadID;
@property(copy) NSNumber * downloadState;
@property(copy) NSError * error;
@property(copy) NSNumber * progress;
@property(copy) NSNumber * timeRemaining;

+ (id)changesetWithDownloadID:(id)arg1 state:(long long)arg2;

- (id)contentLength;
- (id)contentURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)downloadID;
- (id)downloadState;
- (id)error;
- (id)initWithXPCEncoding:(id)arg1;
- (id)progress;
- (void)setContentLength:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setDownloadID:(id)arg1;
- (void)setDownloadState:(id)arg1;
- (void)setError:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setTimeRemaining:(id)arg1;
- (id)timeRemaining;

@end
