/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <MobileBackup/XXUnknownSuperclass.h>

@class NSMutableDictionary, NSDate;

@interface MBDebugContext : XXUnknownSuperclass {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
}
@property(retain, nonatomic) NSDate *simulatedDate;	// G=0xbcb9; S=0xbc79; 
@property(readonly, assign, nonatomic) int time;	// G=0xbcd5; 
+ (id)defaultDebugContext;	// 0xb8cd
- (id)init;	// 0xbd11
- (void)dealloc;	// 0xb881
// declared property getter: - (long)time;	// 0xbcd5
// declared property getter: - (id)simulatedDate;	// 0xbcb9
// declared property setter: - (void)setSimulatedDate:(id)date;	// 0xbc79
- (BOOL)isFlagSet:(id)set;	// 0xbc41
- (void)setFlag:(id)flag;	// 0xbbed
- (void)setValue:(id)value forName:(id)name;	// 0xbbc1
- (void)removeValueForName:(id)name;	// 0xbb9d
- (id)valueForName:(id)name;	// 0xbb79
- (void)setBool:(BOOL)aBool forName:(id)name;	// 0xbb25
- (BOOL)boolForName:(id)name;	// 0xbaed
- (void)setInt:(int)theInt forName:(id)name;	// 0xbaad
- (int)intForName:(id)name;	// 0xba85
- (void)setDelegate:(id)delegate andSelector:(SEL)selector forName:(id)name;	// 0xba25
- (id)performSelectorForName:(id)name;	// 0xb9cd
- (id)performSelectorForName:(id)name withObject:(id)object;	// 0xb969
- (BOOL)eval:(id)eval;	// 0xb925
- (id)description;	// 0xb911
@end
