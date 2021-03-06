/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <GameKitServices/GKOOBMessage.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface GKVoiceChatSessionMessage : GKOOBMessage {
@private
	NSMutableData *_data;	// 8 = 0x8
	unsigned _conferenceID;	// 12 = 0xc
	unsigned _subtype;	// 16 = 0x10
}
@property(readonly, retain) NSMutableData *data;	// G=0x3e2d5; converted property
@property(readonly, assign) unsigned conferenceID;	// G=0x3e30d; converted property
@property(readonly, assign) unsigned subtype;	// G=0x3e2e5; converted property
- (id)init;	// 0x3e31d
- (id)initWithBytes:(void *)bytes length:(unsigned long)length;	// 0x3e51d
- (id)initWithPayload:(id)payload conferenceID:(unsigned)anId subtype:(unsigned)subtype;	// 0x3e431
- (void)dealloc;	// 0x3e3e5
// converted property getter: - (id)data;	// 0x3e2d5
- (id)payload;	// 0x3e371
// converted property getter: - (unsigned)subtype;	// 0x3e2e5
- (BOOL)_checkType:(unsigned short)type;	// 0x3e2f5
- (BOOL)_checkSize:(unsigned long)size;	// 0x3e301
// converted property getter: - (unsigned)conferenceID;	// 0x3e30d
@end
