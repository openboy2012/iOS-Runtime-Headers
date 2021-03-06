/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCVideoRule : NSObject {
    float fPref;
    float fRate;
    int iHeight;
    int iPayload;
    int iWidth;
}

@property float fPref;
@property float fRate;
@property int iHeight;
@property int iPayload;
@property int iWidth;

- (long long)compare:(id)arg1;
- (long long)compareByPref:(id)arg1;
- (id)description;
- (float)fPref;
- (float)fRate;
- (int)iHeight;
- (int)iPayload;
- (int)iWidth;
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 payload:(int)arg4;
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 pref:(float)arg4;
- (id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3;
- (void)setFPref:(float)arg1;
- (void)setFRate:(float)arg1;
- (void)setIHeight:(int)arg1;
- (void)setIPayload:(int)arg1;
- (void)setIWidth:(int)arg1;
- (void)setToVideoRule:(id)arg1;

@end
