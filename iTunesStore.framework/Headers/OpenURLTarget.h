/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <iTunesStore/XXUnknownSuperclass.h>

@class NSString;

@interface OpenURLTarget : XXUnknownSuperclass {
	unsigned _applicationState;	// 4 = 0x4
	struct {
		NSString *clientIdentifier;
		NSString *normalScheme;
		NSString *secureScheme;
	} _targetData;	// 8 = 0x8
	int _targetIndex;	// 20 = 0x14
}
- (id)description;	// 0x27ef9
- (id)copyURLForURL:(id)url;	// 0x27ddd
- (int)compare:(id)compare;	// 0x27d79
- (id)initWithTargetIdentifier:(id)targetIdentifier;	// 0x27c81
- (id)init;	// 0x27c6d
@end
