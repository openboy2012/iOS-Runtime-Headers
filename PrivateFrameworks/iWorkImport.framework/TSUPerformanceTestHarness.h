/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray;

@interface TSUPerformanceTestHarness : NSObject {
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    boolmPassed;
    boolmQuiet;
    long long mPassingTests;
    } mSetupTime;
    NSMutableArray *mTestCases;
    long long mTotalTests;
}

@property(readonly) bool passed;
@property(readonly) long long passingTestCount;
@property bool quiet;
@property(readonly) long long testCount;

+ (id)harness;

- (void)cleanup;
- (void)dealloc;
- (id)init;
- (id)p_createResultDirectory;
- (void)p_writeConsoleMessagesToDirectory:(id)arg1;
- (void)p_writeCsvResultsToDirectory:(id)arg1;
- (void)p_writeSystemConfigurationToDirectory:(id)arg1;
- (bool)passed;
- (long long)passingTestCount;
- (bool)quiet;
- (void)report;
- (void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 precision:(double)arg4;
- (void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3;
- (bool)runTests;
- (void)setQuiet:(bool)arg1;
- (void)setup;
- (long long)testCount;
- (void)testSuite;
- (id)testWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3;

@end
