/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/FTFaceTimeMessage.h>
#import <FTServices/NSCopying.h>
#import <FTServices/FTServices-Structs.h>

@class NSNumber, NSDictionary, NSData, NSString, NSArray;

@interface FTInitiateMessage : FTFaceTimeMessage <NSCopying> {
	NSData *_selfBlob;	// 4 = 0x4
	NSData *_selfPushToken;	// 8 = 0x8
	NSNumber *_selfNATType;	// 12 = 0xc
	NSData *_selfNatIP;	// 16 = 0x10
	NSArray *_peers;	// 20 = 0x14
	NSString *_aliasUserID;	// 24 = 0x18
	NSData *_aliasSignature;	// 28 = 0x1c
	NSArray *_canonicalizedPeers;	// 32 = 0x20
	NSDictionary *_regionInformation;	// 36 = 0x24
}
@property(copy) NSArray *canonicalizedPeers;	// G=0x2ca5; S=0x2cb9; @synthesize=_canonicalizedPeers
@property(copy) NSArray *peers;	// G=0x2bfd; S=0x2c11; @synthesize=_peers
@property(copy) NSDictionary *regionInformation;	// G=0x2cdd; S=0x2cf1; @synthesize=_regionInformation
@property(copy) NSData *aliasSignature;	// G=0x2c6d; S=0x2c81; @synthesize=_aliasSignature
@property(copy) NSString *aliasUserID;	// G=0x2c35; S=0x2c49; @synthesize=_aliasUserID
@property(copy) NSData *selfNatIP;	// G=0x2bc5; S=0x2bd9; @synthesize=_selfNatIP
@property(copy) NSNumber *selfNATType;	// G=0x2b8d; S=0x2ba1; @synthesize=_selfNATType
@property(copy) NSData *selfPushToken;	// G=0x2b55; S=0x2b69; @synthesize=_selfPushToken
@property(copy) NSData *selfBlob;	// G=0x2b1d; S=0x2b31; @synthesize=_selfBlob
// declared property setter: - (void)setRegionInformation:(id)information;	// 0x2cf1
// declared property getter: - (id)regionInformation;	// 0x2cdd
// declared property setter: - (void)setCanonicalizedPeers:(id)peers;	// 0x2cb9
// declared property getter: - (id)canonicalizedPeers;	// 0x2ca5
// declared property setter: - (void)setAliasSignature:(id)signature;	// 0x2c81
// declared property getter: - (id)aliasSignature;	// 0x2c6d
// declared property setter: - (void)setAliasUserID:(id)anId;	// 0x2c49
// declared property getter: - (id)aliasUserID;	// 0x2c35
// declared property setter: - (void)setPeers:(id)peers;	// 0x2c11
// declared property getter: - (id)peers;	// 0x2bfd
// declared property setter: - (void)setSelfNatIP:(id)ip;	// 0x2bd9
// declared property getter: - (id)selfNatIP;	// 0x2bc5
// declared property setter: - (void)setSelfNATType:(id)type;	// 0x2ba1
// declared property getter: - (id)selfNATType;	// 0x2b8d
// declared property setter: - (void)setSelfPushToken:(id)token;	// 0x2b69
// declared property getter: - (id)selfPushToken;	// 0x2b55
// declared property setter: - (void)setSelfBlob:(id)blob;	// 0x2b31
// declared property getter: - (id)selfBlob;	// 0x2b1d
- (void)handleResponseDictionary:(id)dictionary;	// 0x2a91
- (id)messageBody;	// 0x2705
- (id)requiredKeys;	// 0x2659
- (id)bagKey;	// 0x264d
- (id)additionalMessageHeaders;	// 0x2471
- (id)additionalMessageHeadersForOutgoingPush;	// 0x2295
- (void)dealloc;	// 0x21a9
- (id)copyWithZone:(NSZone *)zone;	// 0x217d
- (id)init;	// 0x2131
@end
