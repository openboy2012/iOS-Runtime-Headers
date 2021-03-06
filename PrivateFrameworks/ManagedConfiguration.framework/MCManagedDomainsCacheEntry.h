/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber, NSString;

@interface MCManagedDomainsCacheEntry : NSObject {
    NSString *_domain;
    NSString *_path;
    NSNumber *_port;
    bool_subdomainsMatch;
}

@property(retain) NSString * domain;
@property(retain) NSString * path;
@property(retain) NSNumber * port;
@property bool subdomainsMatch;

+ (id)normalizedPatternString:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)domain;
- (id)initWithPattern:(id)arg1;
- (bool)matchesURL:(id)arg1;
- (id)path;
- (id)port;
- (void)setDomain:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPort:(id)arg1;
- (void)setSubdomainsMatch:(bool)arg1;
- (bool)subdomainsMatch;

@end
