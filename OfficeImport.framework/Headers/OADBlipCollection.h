/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADBlipCollection : XXUnknownSuperclass {
@private
	NSMutableArray *mBlips;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *blips;	// G=0x194b71; S=0x29d709; @synthesize=mBlips
- (id)init;	// 0xaac39
- (void)dealloc;	// 0x90955
- (id)blipAtIndex:(long)index;	// 0xc6b15
- (unsigned long)addBlip:(id)blip;	// 0xbd869
- (unsigned long)blipCount;	// 0x29d6e9
// declared property getter: - (id)blips;	// 0x194b71
// declared property setter: - (void)setBlips:(id)blips;	// 0x29d709
@end
