/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUCoverFlowTransitionViewController.h>
#import <iPodUI/MPVideoTransferViewController.h>
#import <iPodUI/XXUnknownSuperclass.h>

@class IUFlipperButton, MPPortraitTransportControls, UIView, UINavigationButton, UITransitionView, MPViewController, MPImageCacheRequest, MPImageCache;

@interface IUNowPlayingPortraitViewController : XXUnknownSuperclass <IUCoverFlowTransitionViewController, MPVideoTransferViewController> {
	MPPortraitTransportControls *_transportControls;	// 192 = 0xc0
	UIView *_flipContainerView;	// 196 = 0xc4
	UINavigationButton *_backButton;	// 200 = 0xc8
	UINavigationButton *_scaleModeButton;	// 204 = 0xcc
	IUFlipperButton *_flipperButton;	// 208 = 0xd0
	MPImageCache *_flipperImageCache;	// 212 = 0xd4
	MPImageCacheRequest *_flipperImageRequest;	// 216 = 0xd8
	MPViewController *_preFlipController;	// 220 = 0xdc
	MPViewController *_preSlideController;	// 224 = 0xe0
	MPViewController *_mainController;	// 228 = 0xe4
	UITransitionView *_transitionView;	// 232 = 0xe8
	UIView *_transitionOverlayView;	// 236 = 0xec
	BOOL _showFlipperHint;	// 240 = 0xf0
	BOOL _didZoom;	// 241 = 0xf1
	unsigned _tvOutEnabled : 1;	// 242 = 0xf2
}
@property(assign, nonatomic) BOOL inhibitOverlay;
@property(assign, nonatomic, getter=isTVOutEnabled) BOOL TVOutEnabled;	// G=0x5eaa1; S=0x5eab5; 
@property(assign, nonatomic) BOOL showFlipperHint;	// G=0x609a1; S=0x609b1; @synthesize=_showFlipperHint
// declared property setter: - (void)setShowFlipperHint:(BOOL)hint;	// 0x609b1
// declared property getter: - (BOOL)showFlipperHint;	// 0x609a1
- (BOOL)isStatusBarHidden;	// 0x6099d
- (int)statusBarStyle;	// 0x6097d
- (id)_viewControllerForChangeFromItem:(id)item toItem:(id)item2 withAvailableController:(id)availableController;	// 0x60755
- (Class)_viewControllerClassForItem:(id)item;	// 0x60705
- (void)_updateViewControllerForChangeFromItem:(id)item toItem:(id)item2 animate:(BOOL)animate;	// 0x604e9
- (void)_updateNavigationBarForItem:(id)item animate:(BOOL)animate;	// 0x5ffcd
- (void)_slideToController:(id)controller transition:(int)transition;	// 0x5fc8d
- (void)_setFlipperButtonImageWithItem:(id)item time:(double)time;	// 0x5fa6d
- (void)_reloadForChangeFromItem:(id)item toItem:(id)item2;	// 0x5f989
- (id)_navigationBar;	// 0x5f961
- (id)_flipTransition;	// 0x5f881
- (id)_flipperButton;	// 0x5f735
- (void)_flipFromViewController:(id)viewController toViewController:(id)viewController2 withType:(id)type;	// 0x5f595
- (void)_exitNowPlaying;	// 0x5f52d
- (void)_configureViewController:(id)controller;	// 0x5f49d
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned)part;	// 0x5f1d1
- (BOOL)transportControls:(id)controls releasedHeldButtonPart:(unsigned)part;	// 0x5f1b5
- (BOOL)transportControls:(id)controls heldButtonPart:(unsigned)part;	// 0x5f199
- (void)_scaleModeButton:(id)button;	// 0x5f179
- (void)_flipperButton:(id)button;	// 0x5f169
- (void)_back:(id)back;	// 0x5f159
- (void)_crossedTimeMarkerNotification:(id)notification;	// 0x5f0c5
- (void)videoController:(id)controller willShowChaptersWithTransition:(id)transition;	// 0x5f02d
- (void)videoController:(id)controller scaleModeDidChange:(unsigned)scaleMode;	// 0x5efe9
- (void)viewController:(id)controller viewWasDoubleTapped:(id)tapped;	// 0x5efd5
- (void)viewController:(id)controller endIgnoringChangeType:(unsigned)type;	// 0x5ef81
- (void)viewController:(id)controller beginIgnoringChangeTypes:(unsigned)types;	// 0x5ef2d
- (void)viewControllerRequestsExit:(id)exit;	// 0x5ef1d
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x5ee81
- (id)videoView;	// 0x5ee35
- (void)displayVideoView;	// 0x5eded
- (void)coverFlowWillTransitionOut:(BOOL)coverFlow;	// 0x5ed29
- (void)coverFlowWillTransitionIn:(BOOL)coverFlow;	// 0x5eca9
- (void)coverFlowIsTransitioningOut:(BOOL)anOut;	// 0x5ec35
- (void)coverFlowIsTransitioningIn:(BOOL)anIn;	// 0x5ec15
- (void)coverFlowDidTransitionOut:(BOOL)coverFlow;	// 0x5ebad
- (void)coverFlowDidTransitionIn:(BOOL)coverFlow;	// 0x5eba9
- (id)coverViewFlipView;	// 0x5eb41
// declared property setter: - (void)setTVOutEnabled:(BOOL)enabled;	// 0x5eab5
// declared property getter: - (BOOL)isTVOutEnabled;	// 0x5eaa1
- (void)viewWillDisappear:(BOOL)view;	// 0x5e9d5
- (void)viewDidDisappear:(BOOL)view;	// 0x5e93d
- (void)viewWillAppear:(BOOL)view;	// 0x5e81d
- (void)viewDidAppear:(BOOL)view;	// 0x5e6f9
- (void)setOrientation:(int)orientation animate:(BOOL)animate;	// 0x5e671
- (void)_setExistingNavigationItem:(id)item;	// 0x5e601
- (void)setItem:(id)item;	// 0x5e571
- (void)noteIgnoredChangeTypes:(unsigned)types;	// 0x5e551
- (id)navigationController;	// 0x5e509
- (void)loadView;	// 0x5e239
- (int)displayableInterfaceOrientationForInterfaceOrientation:(int)interfaceOrientation;	// 0x5e235
- (BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;	// 0x5e1f5
- (void)flip:(id)flip;	// 0x5deb9
- (void)dealloc;	// 0x5dc19
- (id)init;	// 0x5db99
@end
