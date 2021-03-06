/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class HKCategoryType, NSNumber;

@interface _HKCategoryValueFilter : _HKFilter {
    NSNumber *_comparisonValue;
    HKCategoryType *_dataType;
    unsigned long long _operatorType;
}

@property(readonly) NSNumber * comparisonValue;
@property(readonly) HKCategoryType * dataType;
@property(readonly) unsigned long long operatorType;

+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned long long)arg1 comparisonValue:(id)arg2 dataType:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)acceptsDataObject:(id)arg1;
- (id)comparisonValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operatorType;
- (id)predicateWithHealthDaemon:(id)arg1;

@end
