/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMMapper.h>
#import <OfficeImport/WMSectionMapper.h>

@class WDSection;

__attribute__((visibility("hidden")))
@interface WMSectionMapper : CMMapper {
@private
	WDSection *wdSection;	// 8 = 0x8
	float mTopMargin;	// 12 = 0xc
	float mLeftMargin;	// 16 = 0x10
	BOOL mBreakAtStart;	// 20 = 0x14
	BOOL mBreakAtEnd;	// 21 = 0x15
	BOOL mIsTitlePage;	// 22 = 0x16
}
@property(assign) float topMargin;	// G=0x2f0c45; S=0x2f0c35; converted property
@property(assign) float leftMargin;	// G=0x2f0c65; S=0x2f0c55; converted property
- (id)initWithWDSection:(id)wdsection breakAtStart:(BOOL)start breakAtEnd:(BOOL)end parent:(id)parent;	// 0x9f6c9
- (void)MapSectionStyleAt:(id)at;	// 0x9fc69
- (void)mapAt:(id)at withState:(id)state;	// 0x9f9cd
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x2f0c35
// converted property getter: - (float)topMargin;	// 0x2f0c45
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x2f0c55
// converted property getter: - (float)leftMargin;	// 0x2f0c65
@end

@interface WMSectionMapper (Private)
+ (BOOL)isContentEmpty:(id)empty;	// 0x9f4c5
- (void)mapHeaderAt:(id)at withState:(id)state;	// 0x9fcdd
- (void)mapFooterAt:(id)at withState:(id)state;	// 0x9f2e1
@end
