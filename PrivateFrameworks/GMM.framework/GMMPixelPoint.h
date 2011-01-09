/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */



@interface GMMPixelPoint : NSObject <GMMReadWriteStream>
{
    NSInteger _pixelX;
    BOOL _hasPixelX;
    NSInteger _pixelY;
    BOOL _hasPixelY;
    NSInteger _zoomLevel;
    BOOL _hasZoomLevel;
}

@property BOOL hasZoomLevel; /* unknown property attribute: V_hasZoomLevel */
@property NSInteger zoomLevel; /* unknown property attribute: V_zoomLevel */
@property BOOL hasPixelY; /* unknown property attribute: V_hasPixelY */
@property NSInteger pixelY; /* unknown property attribute: V_pixelY */
@property BOOL hasPixelX; /* unknown property attribute: V_hasPixelX */
@property NSInteger pixelX; /* unknown property attribute: V_pixelX */


- (id)init;
- (void)dealloc;
- (void)setPixelX:(NSInteger)arg1;
- (void)setPixelY:(NSInteger)arg1;
- (void)setZoomLevel:(NSInteger)arg1;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */

- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;
- (BOOL)hasZoomLevel;
- (void)setHasZoomLevel:(BOOL)arg1;
- (NSInteger)zoomLevel;
- (BOOL)hasPixelY;
- (void)setHasPixelY:(BOOL)arg1;
- (NSInteger)pixelY;
- (BOOL)hasPixelX;
- (void)setHasPixelX:(BOOL)arg1;
- (NSInteger)pixelX;

@end