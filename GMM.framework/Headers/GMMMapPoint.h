/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <GMM/GMM-Structs.h>
#import <GMM/GMMMapPoint.h>
#import <GMM/XXUnknownSuperclass.h>


@interface GMMMapPoint : XXUnknownSuperclass {
	int _latitude;	// 4 = 0x4
	int _longitude;	// 8 = 0x8
}
@property(assign, nonatomic) int longitude;	// G=0x14de9; S=0x14df9; @synthesize=_longitude
@property(assign, nonatomic) int latitude;	// G=0x14dc9; S=0x14dd9; @synthesize=_latitude
// declared property setter: - (void)setLongitude:(int)longitude;	// 0x14df9
// declared property getter: - (int)longitude;	// 0x14de9
// declared property setter: - (void)setLatitude:(int)latitude;	// 0x14dd9
// declared property getter: - (int)latitude;	// 0x14dc9
- (void)writeTo:(id)to;	// 0x14d81
- (BOOL)readFrom:(id)from;	// 0x14c8d
- (id)dictionaryRepresentation;	// 0x14be1
- (id)description;	// 0x14b71
- (void)dealloc;	// 0x14b45
@end

@interface GMMMapPoint (GMMGEODirectionsProvider)
- (id)initWithCoordinate:(XXStruct_UNJ7RC)coordinate;	// 0x3d945
@end