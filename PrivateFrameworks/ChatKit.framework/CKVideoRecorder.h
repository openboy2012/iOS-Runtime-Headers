/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKVideoRecorderDelegate>, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoPreviewLayer, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CKVideoRecorder : UIViewController <AVCaptureFileOutputRecordingDelegate> {
    AVCaptureDeviceInput *_audioInput;
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;
    long long _currentDevice;
    <CKVideoRecorderDelegate> *_delegate;
    AVCaptureDevice *_frontFacingCamera;
    AVCaptureDeviceInput *_frontVideoInput;
    NSURL *_outputFileURL;
    AVCaptureDevice *_rearFacingCamera;
    AVCaptureDeviceInput *_rearVideoInput;
    AVCaptureSession *_session;
    AVCaptureStillImageOutput *_stillImageOutput;
    AVCaptureMovieFileOutput *_videoOutput;
    bool_canceled;
    bool_previousStatusBarHidden;
}

@property(retain) AVCaptureDeviceInput * audioInput;
@property long long cameraDevice;
@property bool canceled;
@property(retain) AVCaptureVideoPreviewLayer * captureVideoPreviewLayer;
@property(copy,readonly) NSString * debugDescription;
@property <CKVideoRecorderDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) AVCaptureDeviceInput * frontVideoInput;
@property(readonly) unsigned long long hash;
@property(copy) NSURL * outputFileURL;
@property(retain) AVCaptureDeviceInput * rearVideoInput;
@property(retain) AVCaptureSession * session;
@property(retain) AVCaptureStillImageOutput * stillImageOutput;
@property(readonly) Class superclass;
@property(retain) AVCaptureMovieFileOutput * videoOutput;

- (id)_cameraWithPosition:(long long)arg1;
- (id)_configureFrontVideoInput;
- (id)_configureRearVideoInput;
- (id)audioDevice;
- (id)audioInput;
- (long long)cameraDevice;
- (void)cancel;
- (bool)canceled;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (id)captureVideoPreviewLayer;
- (void)dealloc;
- (id)delegate;
- (id)frontFacingCamera;
- (id)frontVideoInput;
- (id)init;
- (void)loadView;
- (id)outputFileURL;
- (id)rearFacingCamera;
- (id)rearVideoInput;
- (id)session;
- (void)setAudioInput:(id)arg1;
- (void)setCameraDevice:(long long)arg1;
- (void)setCanceled:(bool)arg1;
- (void)setCaptureVideoPreviewLayer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrontVideoInput:(id)arg1;
- (void)setOutputFileURL:(id)arg1;
- (void)setRearVideoInput:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStillImageOutput:(id)arg1;
- (void)setVideoOutput:(id)arg1;
- (void)setupCamera:(id)arg1;
- (bool)startVideoCapture;
- (id)stillImageOutput;
- (void)stopVideoCapture;
- (void)takePicture;
- (id)videoOutput;
- (void)viewWillAppear:(bool)arg1;

@end
