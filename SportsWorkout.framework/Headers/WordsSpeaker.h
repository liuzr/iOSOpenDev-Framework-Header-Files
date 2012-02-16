/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <SportsWorkout/XXUnknownSuperclass.h>

@class Decomposer, Player;

@interface WordsSpeaker : XXUnknownSuperclass {
	Decomposer *_matcher;	// 4 = 0x4
	Player *_player;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) BOOL isPlaying;	// G=0x2da6d; @dynamic
- (void)stopAllSounds;	// 0x2db85
- (BOOL)playSoundsForWords:(id)words;	// 0x2da91
// declared property getter: - (BOOL)isPlaying;	// 0x2da6d
- (id)initWithGender:(id)gender language:(id)language;	// 0x2d91d
@end