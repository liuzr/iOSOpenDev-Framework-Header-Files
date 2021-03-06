/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

#import <SportsTrainer/XXUnknownSuperclass.h>
#import <SportsTrainer/SportsTrainer-Structs.h>

@class UIGradient, UIColor;

@interface STRoundedGradientBackroundView : XXUnknownSuperclass {
	UIColor *_topColor;	// 48 = 0x30
	UIColor *_bottomColor;	// 52 = 0x34
	UIColor *_borderColor;	// 56 = 0x38
	UIGradient *_gradient;	// 60 = 0x3c
}
@property(retain, nonatomic) UIColor *borderColor;	// G=0x11509; S=0x11069; @synthesize=_borderColor
@property(retain, nonatomic) UIColor *bottomColor;	// G=0x114f9; S=0x11001; @synthesize=_bottomColor
@property(retain, nonatomic) UIColor *topColor;	// G=0x114e9; S=0x10f99; @synthesize=_topColor
// declared property getter: - (id)borderColor;	// 0x11509
// declared property getter: - (id)bottomColor;	// 0x114f9
// declared property getter: - (id)topColor;	// 0x114e9
- (void)_invalidateGradient;	// 0x114bd
- (id)_gradient;	// 0x111e1
- (void)drawRect:(CGRect)rect;	// 0x110c1
// declared property setter: - (void)setBorderColor:(id)color;	// 0x11069
// declared property setter: - (void)setBottomColor:(id)color;	// 0x11001
// declared property setter: - (void)setTopColor:(id)color;	// 0x10f99
- (void)dealloc;	// 0x10f11
- (id)initWithFrame:(CGRect)frame;	// 0x10ec1
@end
