/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSString;

@interface PLRevGeoCompoundNameInfo : NSObject {
    NSString *_namePrefix;
    NSString *_nameSuffix;
    NSArray *_sortedNames;
    bool_isContinuation;
    bool_suffixWhenPrefixOnly;
}

@property bool isContinuation;
@property(copy,readonly) NSArray * localizedSortedNames;
@property(copy,readonly) NSString * localizedTitleForNameInfo;
@property(copy) NSString * namePrefix;
@property(copy) NSString * nameSuffix;
@property(copy) NSArray * sortedNames;
@property bool suffixWhenPrefixOnly;

+ (id)_localizedNameForName:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)dictionaryForInfo;
- (id)initWithDictionary:(id)arg1;
- (bool)isContinuation;
- (id)localizedSortedNames;
- (id)localizedTitleForNameInfo;
- (id)namePrefix;
- (id)nameSuffix;
- (void)setIsContinuation:(bool)arg1;
- (void)setNamePrefix:(id)arg1;
- (void)setNameSuffix:(id)arg1;
- (void)setSortedNames:(id)arg1;
- (void)setSuffixWhenPrefixOnly:(bool)arg1;
- (id)sortedNames;
- (bool)suffixWhenPrefixOnly;

@end
