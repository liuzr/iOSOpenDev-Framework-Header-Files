/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFDeviceDriver.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class NSAffineTransform;

__attribute__((visibility("hidden")))
@interface MFCocoaDeviceDriver : XXUnknownSuperclass <MFDeviceDriver> {
@private
	CGRect m_canvas;	// 4 = 0x4
	CGRect m_viewBox;	// 20 = 0x14
	NSAffineTransform *m_viewBoxTransform;	// 36 = 0x24
	NSAffineTransform *m_worldToDeviceTransform;	// 40 = 0x28
	NSAffineTransform *m_combinedTransform;	// 44 = 0x2c
}
+ (int)getROP:(id)rop;	// 0x9aff5
- (id)initWithCanvas:(CGRect)canvas;	// 0x95fcd
- (void)dealloc;	// 0x92329
- (void)drawBezierPath:(id)path dc:(id)dc fill:(BOOL)fill stroke:(BOOL)stroke;	// 0x9ad7d
- (int)textOut:(id)anOut :(int *)arg2 :(int *)arg3 :(id)arg4;	// 0x1c0d15
- (int)extTextOut:(id)anOut :(int *)arg2 :(int *)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int *)arg10 :(int)arg11;	// 0x99835
- (int)arc:(id)arc :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x1e9de5
- (int)arcTo:(id)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x2c7339
- (int)angleArc:(id)arc :(int)arg2 :(int)arg3 :(unsigned long)arg4 :(double)arg5 :(double)arg6;	// 0x2c7155
- (int)pie:(id)pie :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x1bdc9d
- (int)chord:(id)chord :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x2c6fcd
- (int)polyline:(id)polyline :(CGPoint *)arg2 :(int)arg3;	// 0x9d561
- (int)polyPolyline:(id)polyline :(CGPoint *)arg2 :(int *)arg3 :(int)arg4;	// 0x1f0e7d
- (int)polygon:(id)polygon :(CGPoint *)arg2 :(int)arg3;	// 0x9d2f5
- (int)polyPolygon:(id)polygon :(CGPoint *)arg2 :(int *)arg3 :(int)arg4;	// 0x153c29
- (int)lineTo:(id)to :(double)arg2 :(double)arg3;	// 0x1b400d
- (int)rectangle:(id)rectangle :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;	// 0x9d119
- (int)roundRect:(id)rect :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(double)arg6 :(double)arg7;	// 0x1fd1c1
- (int)ellipse:(id)ellipse :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;	// 0x9a0f9
- (int)bezierTo:(id)to :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7;	// 0x15dcad
- (int)bezier:(id)bezier :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;	// 0x1d6349
- (void)concatTransforms;	// 0x97a3d
- (void)updateViewBoxTransform;	// 0x97f11
- (int)setViewBox:(double)box :(double)arg2 :(double)arg3 :(double)arg4;	// 0x97de1
- (int)activateTransform:(id)transform;	// 0x979c9
- (void)setTransform:(id)transform;	// 0x9cf91
- (int)excludeClipRect:(CGRect)rect;	// 0x1b5d95
- (int)intersectClipRect:(CGRect)rect;	// 0x9cc59
- (int)removeClip;	// 0x180b99
- (int)setMetaRgn;	// 0x1ef269
- (int)patBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(unsigned long)arg6;	// 0x9b975
- (int)bitBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(unsigned long)arg9 :(CGAffineTransform *)arg10 :(unsigned long)arg11;	// 0x1b5c79
- (int)stretchBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int)arg10 :(unsigned long)arg11 :(CGAffineTransform *)arg12 :(unsigned long)arg13;	// 0x14c1fd
- (int)maskBlt:(id)blt :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(id)arg9 :(int)arg10 :(int)arg11 :(unsigned long)arg12 :(CGAffineTransform *)arg13 :(unsigned long)arg14;	// 0x2c6f71
- (int)plgBlt:(id)blt :(CGPoint *)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(CGAffineTransform *)arg11 :(unsigned long)arg12;	// 0x2c6f01
- (id)createHatchBrush:(id)brush :(int)arg2;	// 0x20f06d
- (id)createPatternBrush:(id)brush usePaletteForBilevel:(BOOL)bilevel;	// 0x1c0511
- (id)createSolidBrush:(id)brush;	// 0x96be9
- (id)createNullBrush;	// 0x9d405
- (id)createPen;	// 0x180819
- (id)createPen:(int)pen :(long)arg2 :(id)arg3 :(double *)arg4;	// 0x969ed
- (id)createFont:(int)font;	// 0x9650d
- (id)createFont:(long)font :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;	// 0x98d25
- (id)createFontIndirectW:(long)w :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned)arg18 :(unsigned)arg19 :(unsigned)arg20 :(unsigned)arg21 :(unsigned)arg22;	// 0x1b46d9
- (id)createPath;	// 0x96d25
- (id)createRegionWithRects:(id)rects :(id)arg2;	// 0x1be3e1
- (id)createRegionWithPath:(id)path;	// 0x1c15f9
- (id)createDIBitmap:(id)bitmap :(const char *)arg2 :(unsigned)arg3 :(int)arg4;	// 0x14ba61
- (id)createDIBitmap:(id)bitmap :(const char *)arg2 :(unsigned)arg3 :(const char *)arg4 :(unsigned)arg5 :(int)arg6;	// 0x1800c9
- (id)createBitmap:(id)bitmap :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char *)arg6 :(unsigned)arg7;	// 0x2c6f05
@end