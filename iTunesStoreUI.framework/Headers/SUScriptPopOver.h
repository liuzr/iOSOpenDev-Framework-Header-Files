/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptViewController, UIPopoverController;

@interface SUScriptPopOver : SUScriptObject {
	BOOL _ignoreDismiss;	// 36 = 0x24
}
@property(retain) SUScriptViewController *viewController;	// G=0x48035; S=0x47ed1; 
@property(assign) float contentWidth;	// G=0x47b31; S=0x47df5; 
@property(assign) float contentHeight;	// G=0x47949; S=0x47d19; 
@property(retain, nonatomic) UIPopoverController *nativePopoverController;	// G=0x4759d; S=0x47601; 
+ (void)initialize;	// 0x48d35
+ (id)webScriptNameForSelector:(SEL)selector;	// 0x48c7d
+ (id)webScriptNameForKey:(const char *)key;	// 0x48bd9
- (id)scriptAttributeKeys;	// 0x48cd5
- (id)attributeKeys;	// 0x48cc5
- (void)_showAsModalViewController;	// 0x48af9
- (BOOL)_shouldDisplayAsPopover;	// 0x48ac5
- (void)_setNativeViewController:(id)controller;	// 0x48a7d
- (void)_setIgnoresDismiss:(BOOL)dismiss;	// 0x48a6d
- (id)_popOverController;	// 0x48981
- (BOOL)_isViewControllerVisible;	// 0x48911
- (id)_nativeViewController;	// 0x488ad
- (id)_activeViewController;	// 0x48815
- (void)_showFromNavigationItem:(id)navigationItem;	// 0x486d9
- (void)_showFromDOMElement:(id)domelement;	// 0x4840d
- (void)_dismissAnimated:(BOOL)animated;	// 0x48331
- (void)_viewControllerDidDismiss:(id)_viewController;	// 0x48255
- (void)_overlayWillShowNotification:(id)_overlay;	// 0x48241
// declared property getter: - (id)viewController;	// 0x48035
// declared property setter: - (void)setViewController:(id)controller;	// 0x47ed1
// declared property setter: - (void)setContentWidth:(float)width;	// 0x47df5
// declared property setter: - (void)setContentHeight:(float)height;	// 0x47d19
// declared property getter: - (float)contentWidth;	// 0x47b31
// declared property getter: - (float)contentHeight;	// 0x47949
- (id)_className;	// 0x4793d
- (BOOL)showFromNavigationItem:(id)navigationItem;	// 0x478b9
- (BOOL)showFromElement:(id)element;	// 0x47825
- (void)setContentWidth:(float)width height:(float)height animated:(BOOL)animated;	// 0x4776d
- (void)dismissAnimated:(id)animated;	// 0x476a5
- (void)tearDownUserInterface;	// 0x47649
// declared property setter: - (void)setNativePopoverController:(id)controller;	// 0x47601
// declared property getter: - (id)nativePopoverController;	// 0x4759d
- (void)dealloc;	// 0x47501
- (id)init;	// 0x47445
@end
