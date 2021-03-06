/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>

@class UIButton, UIImage, PLCameraButton, UIImageView, UIView, NSString, PLCropOverlayBottomBarButton, UILabel;

@interface PLCropOverlayBottomBar : XXUnknownSuperclass {
	UIImage *_backgroundImage;	// 48 = 0x30
	UIImageView *_takePhotoView;	// 52 = 0x34
	PLCameraButton *_shutterButton;	// 56 = 0x38
	PLCropOverlayBottomBarButton *_cancelButton;	// 60 = 0x3c
	UIView *_modeSwitch;	// 64 = 0x40
	UIButton *_playPauseButton;	// 68 = 0x44
	UIImage *_playImage;	// 72 = 0x48
	UIImage *_pauseImage;	// 76 = 0x4c
	NSString *_title;	// 80 = 0x50
	UIImageView *_editPhotoView;	// 84 = 0x54
	PLCropOverlayBottomBarButton *_editCancelButton;	// 88 = 0x58
	PLCropOverlayBottomBarButton *_editDoneButton;	// 92 = 0x5c
	UILabel *_editLabel;	// 96 = 0x60
	id _delegate;	// 100 = 0x64
	unsigned _takingPhotoView : 1;	// 104 = 0x68
	unsigned _wasEnabled : 1;	// 104 = 0x68
}
@property(assign) id delegate;	// G=0x6b635; S=0x6b625; converted property
@property(retain) UIView *modeSwitch;	// G=0x6b4a9; S=0x6b415; converted property
@property(readonly, retain) PLCameraButton *shutterButton;	// G=0x6b405; converted property
- (void)_slideAnimationComplete:(id)complete;	// 0x6bae5
- (void)didCaptureVideo;	// 0x6bab5
- (void)didCapturePhoto;	// 0x6ba85
- (void)_didCapture;	// 0x6b9d9
- (void)doneButtonClicked:(id)clicked;	// 0x6b991
- (void)editCancelButtonClicked:(id)clicked;	// 0x6b87d
- (void)_animateViewOriginDeltaX:(float)x;	// 0x6b68d
- (void)cancelButtonClicked:(id)clicked;	// 0x6b645
// converted property getter: - (id)delegate;	// 0x6b635
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x6b625
- (void)setCancelButtonHidden:(BOOL)hidden;	// 0x6b605
- (void)setCancelButtonTitle:(id)title;	// 0x6b5b5
- (void)setOKButtonTitle:(id)title;	// 0x6b565
- (CGRect)titleRect;	// 0x6b531
- (void)setTitle:(id)title;	// 0x6b4b9
// converted property getter: - (id)modeSwitch;	// 0x6b4a9
// converted property setter: - (void)setModeSwitch:(id)aSwitch;	// 0x6b415
// converted property getter: - (id)shutterButton;	// 0x6b405
- (void)setEnabled:(BOOL)enabled;	// 0x6b395
- (void)setTakePhoto:(BOOL)photo;	// 0x6b1bd
- (void)didPauseVideo;	// 0x6b179
- (void)didPlayVideo;	// 0x6b135
- (void)_updatePlayPauseButtonImage:(id)image;	// 0x6b115
- (void)_playPause:(id)pause;	// 0x6b07d
- (void)prepareForVideoEdit;	// 0x6ae3d
- (id)_pauseImage;	// 0x6add9
- (id)_playImage;	// 0x6ad75
- (void)_prepareForPhotoEdit;	// 0x6ab25
- (void)_createTakePhotoView;	// 0x6a76d
- (void)layoutSubviews;	// 0x6a555
- (void)dealloc;	// 0x6a419
- (id)initWithFrame:(CGRect)frame;	// 0x6a1c9
@end
