/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/FTServices-Structs.h>
#import <FTServices/XXUnknownSuperclass.h>

@class NSDictionary;

@interface FTEntitlementSupport : XXUnknownSuperclass {
	CTServerConnectionRef _ctServerConnection;	// 4 = 0x4
	CFStringRef _entitlementStatus;	// 8 = 0x8
	CFMachPortRef _ctServerMachPort;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSDictionary *registrationState;	// G=0x2dc01; 
@property(readonly, assign, nonatomic) BOOL faceTimeNonWiFiEntitled;	// G=0x2da41; 
+ (id)sharedInstance;	// 0x2d909
- (void)_handleCTServiceRequestName:(CFStringRef)name userInfo:(CFDictionaryRef)info contextInfo:(void *)info3;	// 0x2e77d
- (BOOL)_disconnectCTServerConnection;	// 0x2e711
- (BOOL)_reconnectCTServerConnectionIfNecessary;	// 0x2e4bd
- (BOOL)_setupCTServerConnection;	// 0x2e12d
- (void)_cleanupMachInfo;	// 0x2e0ad
- (void)_unregisterForCTEntitlementNotifications;	// 0x2e0a9
- (BOOL)_registerForCTEntitlementNotifications;	// 0x2df5d
- (void)_handleEntitlementNotification:(CFDictionaryRef)notification;	// 0x2ddfd
- (void)_registrationStateChanged;	// 0x2dd71
// declared property getter: - (id)registrationState;	// 0x2dc01
// declared property getter: - (BOOL)faceTimeNonWiFiEntitled;	// 0x2da41
- (id)init;	// 0x2d9bd
- (BOOL)retainWeakReference;	// 0x2d9b9
- (BOOL)allowsWeakReference;	// 0x2d9b5
@end
