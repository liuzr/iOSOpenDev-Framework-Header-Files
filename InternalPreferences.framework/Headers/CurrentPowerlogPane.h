/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/InternalPreferences.framework/InternalPreferences
 */

#import <InternalPreferences/InternalPreferences-Structs.h>


@class UITextView;

@interface CurrentPowerlogPane : NSObject {
	UITextView *_textView;	// 80 = 0x50
}
- (id)initWithFrame:(CGRect)frame;	// 0x59e9
- (void)dealloc;	// 0x56e5
- (void)_cleanupTextView;	// 0x59ad
- (void)setPreferenceSpecifier:(id)specifier;	// 0x5735
@end
