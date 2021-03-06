/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface TSTImportWarningSet : NSObject <TSTCellDiffing> {
    struct TSTImportWarningSetCellWarningFlags { 
        unsigned int mCondFormatAboveAvgEqualAverageImportWarning : 1; 
        unsigned int mCondFormatAboveAvgStdDevImportWarning : 1; 
        unsigned int mCondFormatComplexFormulaImportWarning : 1; 
        unsigned int mCondFormatContainsErrorsImportWarning : 1; 
        unsigned int mCondFormatExprImportWarning : 1; 
        unsigned int mCondFormatNotContainsErrorsImportWarning : 1; 
        unsigned int mCondFormatParametersNotAllTheSameTypeImportWarning : 1; 
        unsigned int mCondFormatStopIfTrueImportWarning : 1; 
        unsigned int mCondFormatUnsupportedOperatorImportWarning : 1; 
        unsigned int mCondFormatUnsupportedStylingImportWarning : 1; 
        unsigned int mCondFormatUnsupportedTimePeriodImportWarning : 1; 
        unsigned int mUnsupportedConditionalFormatImportWarning : 1; 
        unsigned int mUnsupportedDataFormatImportWarning : 1; 
    struct TSTImportFormulaWarning { 
        long long mType; 
        NSString *mOriginalFormula; 
        NSString *mSupplementaryText; 
    } mCellWarning;
    } mFormulaWarning;
    NSString *mOriginalDataFormat;
}

+ (id)cellDiffClearingAllWarningsWithContext:(id)arg1;
+ (id)emptyWarningSet;
+ (id)p_warningSetForFormulaWarningType:(long long)arg1 originalFormula:(id)arg2 supplementaryText:(id)arg3;
+ (id)properties;
+ (id)warningSetFor3DReferenceFormula:(id)arg1;
+ (id)warningSetForArrayedFormula:(id)arg1;
+ (id)warningSetForCondFormatAboveAvgEqualAvg;
+ (id)warningSetForCondFormatAboveAvgStdDev;
+ (id)warningSetForCondFormatComplexFormula;
+ (id)warningSetForCondFormatContainsErrors;
+ (id)warningSetForCondFormatExpr;
+ (id)warningSetForCondFormatNotContainsErrors;
+ (id)warningSetForCondFormatParamatersNotAllTheSame;
+ (id)warningSetForCondFormatStopIfTrue;
+ (id)warningSetForCondFormatUnsupportedOperator;
+ (id)warningSetForCondFormatUnsupportedStyling;
+ (id)warningSetForCondFormatUnsupportedTimePeriod;
+ (id)warningSetForDifferentBehaviorForFunctionFormula:(id)arg1 originalFormula:(id)arg2;
+ (id)warningSetForErrorTokenFormula:(id)arg1;
+ (id)warningSetForExternalReferenceFormula:(id)arg1;
+ (id)warningSetForNaturalLanguageFormula:(id)arg1;
+ (id)warningSetForReferenceOutOfBoundsFormula:(id)arg1;
+ (id)warningSetForSharedFormulaBaseNotFoundFormula:(id)arg1;
+ (id)warningSetForTransposeUnmodifiedWithIssues;
+ (id)warningSetForTransposedWithIssues:(id)arg1;
+ (id)warningSetForTransposedWithoutIssues:(id)arg1;
+ (id)warningSetForUnknownName:(id)arg1 originalFormula:(id)arg2;
+ (id)warningSetForUnsupportedCondFormat;
+ (id)warningSetForUnsupportedDataFormat:(id)arg1;
+ (id)warningSetForUnsupportedFormula:(id)arg1;
+ (id)warningSetForUnsupportedFunction:(id)arg1 originalFormula:(id)arg2;
+ (id)warningSetForUnsupportedNameFormula:(id)arg1;

- (id).cxx_construct;
- (bool)areAnySet;
- (id)cellDiffClearingWarningsWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)individualWarnings;
- (id)init;
- (id)initFromArchive:(const struct ImportWarningSetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ImportWarningSetArchive_FormulaImportWarning {} *x3; boolx4; boolx5; boolx6; boolx7; boolx8; boolx9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; boolx16; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x17; int x18; unsigned int x19[1]; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTransposeWarning;
- (id)localizedWarningStrings;
- (id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2;
- (id)propertiesMatchingThoseInMap:(id)arg1;
- (void)saveToArchive:(struct ImportWarningSetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ImportWarningSetArchive_FormulaImportWarning {} *x3; boolx4; boolx5; boolx6; boolx7; boolx8; boolx9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; boolx16; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x17; int x18; unsigned int x19[1]; }*)arg1;
- (id)warningSetByAddingWarningsFromSet:(id)arg1;
- (id)warningSetByRemovingWarningsFromSet:(id)arg1;

@end
