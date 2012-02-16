/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <ScreenReaderOutput/XXUnknownSuperclass.h>

@class NSMutableDictionary, NSSet, NSBundle, NSArray;

@interface SCROMobileBrailleDisplayInputManager : XXUnknownSuperclass {
	NSMutableDictionary *_displayInfoDict;	// 4 = 0x4
	NSSet *_brailleKeys;	// 8 = 0x8
	NSBundle *_bundle;	// 12 = 0xc
	NSArray *_sixDotCommands;	// 16 = 0x10
	NSArray *_eightDotCommands;	// 20 = 0x14
}
+ (id)sharedManager;	// 0xb8cd
+ (void)initialize;	// 0xb9b1
+ (id)allocWithZone:(NSZone *)zone;	// 0xb96d
- (id)copyWithZone:(NSZone *)zone;	// 0xb8dd
- (id)retain;	// 0xb8e1
- (unsigned)retainCount;	// 0xb8e5
- (void)release;	// 0xb8ed
- (id)autorelease;	// 0xb8f1
- (id)_bundle;	// 0xb8f5
- (id)init;	// 0xcb09
- (void)dealloc;	// 0xca6d
- (void)configureWithDriverConfiguration:(id)driverConfiguration;	// 0xc36d
- (id)driverIdentifierForDisplayWithToken:(long)token;	// 0xc2e1
- (id)modelIdentifierForDisplayWithToken:(long)token;	// 0xc255
- (id)commandForBrailleKey:(id)brailleKey;	// 0xc191
- (id)buttonNamesForInputIdentifier:(id)inputIdentifier forDisplayWithToken:(long)token;	// 0xbe51
- (id)_sixDotCommands;	// 0xbdb9
- (id)_eightDotCommands;	// 0xbd21
- (id)_commandsFromBrailleInputMode:(int)brailleInputMode;	// 0xbc65
- (unsigned)countForDisplayWithToken:(long)token;	// 0xbbc9
- (id)inputIdentifierAtIndex:(unsigned)index forDisplayWithToken:(long)token;	// 0xbb01
- (id)commandAtIndex:(unsigned)index forDisplayWithToken:(long)token;	// 0xba45
- (id)buttonNamesAtIndex:(unsigned)index forDisplayWithToken:(long)token;	// 0xba0d
@end