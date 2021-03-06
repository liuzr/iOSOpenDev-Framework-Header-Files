/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <AssistantServices/XXUnknownSuperclass.h>

@class DKConnection, DKMessage, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ASConnection : XXUnknownSuperclass {
	DKConnection *_connection;	// 4 = 0x4
	DKMessage *_originalMessage;	// 8 = 0x8
	NSString *_anchorValidity;	// 12 = 0xc
	NSString *_preAnchor;	// 16 = 0x10
	NSString *_postAnchor;	// 20 = 0x14
	NSMutableArray *_pendingAdds;	// 24 = 0x18
	NSMutableArray *_pendingDeletes;	// 28 = 0x1c
}
@property(retain, nonatomic) DKMessage *originalMessage;	// G=0x419d; S=0x41ad; @synthesize=_originalMessage
// declared property setter: - (void)setOriginalMessage:(id)message;	// 0x41ad
// declared property getter: - (id)originalMessage;	// 0x419d
- (void)runSyncWithHandler:(id)handler anchor:(id)anchor validity:(id)validity key:(id)key;	// 0x3db5
- (BOOL)_getChunkInfoWithHandler:(id)handler batchSize:(int)size lastAnchor:(id)anchor updates:(id)updates deletes:(id)deletes post:(id *)post;	// 0x3b21
- (BOOL)_sendChunkWithUpdates:(id)updates deletes:(id)deletes pre:(id)pre post:(id)post validity:(id)validity;	// 0x3809
- (void)sendReplyCommandDictionary:(id)dictionary;	// 0x37bd
- (void)dealloc;	// 0x3751
- (id)initWithConnection:(id)connection;	// 0x36fd
@end
