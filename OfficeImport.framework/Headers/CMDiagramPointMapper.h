/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/CMDiagramPointMapper.h>
#import <OfficeImport/CMMapper.h>
#import <OfficeImport/OfficeImport-Structs.h>

@class OADOrientedBounds, CMDrawingContext, ODDPoint, NSString;

__attribute__((visibility("hidden")))
@interface CMDiagramPointMapper : CMMapper {
@private
	ODDPoint *mPoint;	// 8 = 0x8
	CMDrawingContext *mDrawingContext;	// 12 = 0xc
	OADOrientedBounds *mOrientedBounds;	// 16 = 0x10
	NSString *mPresentationName;	// 20 = 0x14
}
@property(retain) id presentationName;	// G=0x1ce731; S=0x1f1da1; converted property
- (id)initWithPoint:(id)point drawingContext:(id)context orientedBounds:(id)bounds parent:(id)parent;	// 0x1cdae1
- (void)mapAt:(id)at withState:(id)state;	// 0x1ce351
- (void)mapStyledRectangle:(CGRect)rectangle at:(id)at withState:(id)state;	// 0x1cedd1
// converted property getter: - (id)presentationName;	// 0x1ce731
// converted property setter: - (void)setPresentationName:(id)name;	// 0x1f1da1
- (void)mapChlidrenAt:(id)at withState:(id)state;	// 0x1cfbfd
- (id)presentationWithName:(id)name;	// 0x1cddad
- (id)shapeStyle;	// 0x1ce55d
- (id)styleMatrix;	// 0x1cec6d
- (void)applyDiagramStyleToShapeProperties;	// 0x1ce4b1
- (id)fill;	// 0x1cef4d
- (id)stroke;	// 0x1cf071
- (void)renderShapeAsBackgroundInBounds:(id)bounds;	// 0x1cedcd
- (void)mapTextAt:(id)at withBounds:(id)bounds isCentered:(BOOL)centered includeChildren:(BOOL)children withState:(id)state;	// 0x1cf405
- (void)mapChildrenTextAt:(id)at style:(id)style level:(int)level withState:(id)state;	// 0x1f6285
- (void)mapSiblingTextAt:(id)at style:(id)style level:(int)level withState:(id)state;	// 0x1f6155
- (id)transformForPresentationWithName:(id)name;	// 0x1cdc09
- (id)transformPresentationName;	// 0x1cdc05
- (id)plainText;	// 0x1cdf45
- (id)baseTextListStyleWithBounds:(id)bounds isCentered:(BOOL)centered;	// 0x1cf669
- (id)diagram;	// 0x1ce69d
- (float)defaultFontSize;	// 0x1cf871
@end

@interface CMDiagramPointMapper (Private)
- (void)mapPointTextAt:(id)at style:(id)style level:(int)level withState:(id)state;	// 0x1cf919
@end
