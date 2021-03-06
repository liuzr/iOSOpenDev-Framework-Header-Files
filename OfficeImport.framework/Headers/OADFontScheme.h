/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/XXUnknownSuperclass.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADFontScheme : XXUnknownSuperclass {
@private
	NSMutableDictionary *mMajorFont;	// 4 = 0x4
	NSMutableDictionary *mMinorFont;	// 8 = 0x8
}
+ (void)addFontEntry:(id)entry script:(id)script typeface:(id)typeface;	// 0x189e79
- (id)init;	// 0xbdae9
- (void)dealloc;	// 0x8f419
- (BOOL)isFontSchemeRef:(id)ref;	// 0x5681
- (id)fontForFontSchemeRef:(id)fontSchemeRef;	// 0x1bbea9
- (unsigned)majorFontCount;	// 0x2a2da1
- (id)majorTypefaceForScript:(id)script;	// 0x1bc131
- (id)majorFont;	// 0xc0e65
- (unsigned)minorFontCount;	// 0x2a2d81
- (id)minorTypefaceForScript:(id)script;	// 0x1bbf79
- (id)minorFont;	// 0xc1091
@end
