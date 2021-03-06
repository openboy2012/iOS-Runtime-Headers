/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString;

@interface MKUserLocationAnnotation : NSObject <MKUserLocationAnnotation> {
    struct { 
        double latitude; 
        double longitude; 
    double _accuracy;
    } _coordinate;
}

@property double accuracy;
@property(readonly) struct { double x1; double x2; } coordinate;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(copy,readonly) NSString * subtitle;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * title;

- (double)accuracy;
- (struct { double x1; double x2; })coordinate;
- (void)setAccuracy:(double)arg1;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;

@end
